#ifndef DISSENT_WEB_WEB_SERVER_H_GUARD
#define DISSENT_WEB_WEB_SERVER_H_GUARD

#include <QDebug>
#include <QHostAddress>
#include <QList>
#include <QPair>
#include <QSet>
#include <QSharedPointer>
#include <QSocketNotifier>
#include <QString>
#include <QTcpServer>
#include <QTextStream>

#include "Services/WebService.hpp"

namespace Dissent {
namespace Web {
  /**
   * An HTTP server that enables interaction with a
   * Dissent node over HTTP.
   */

  class WebServer : public QTcpServer {
    Q_OBJECT

    public:
      typedef Dissent::Web::Services::WebService WebService;

      /**
       * API Version Numbers
       */
      static const unsigned int API_MajorVersionNumber = 0;
      static const unsigned int API_MinorVersionNumber = 0;
      static const unsigned int API_BuildVersionNumber = 0;

      /**
       * Constructor
       * @param url where to listen
       */
      explicit WebServer(QUrl url);

      virtual ~WebServer();

      /** 
       * Start the server
       */
      void Start();

      /**
       * Called by QTcpServer when there is an incoming
       * connection
       * @param the socket number of the incoming connection
       */
      void incomingConnection(int socket);

      /**
       * Maximum number of messages to store in buffer
       */
      static const int MaxMessages = 20;

      /** 
       * Write HTML error message to socket and close
       * @param the socket to write
       * @param the HTTP status code to return
       */
      void ReturnError(QTcpSocket* socket, HttpResponse::StatusCode status);

      /**
       * Add a route to the routing table.
       * WARNING: WebServer deletes all web services
       * in the table when its destructor is called!
       * 
       * @param the method to route (GET, POST, etc)
       * @param the base path to route (without query string)
       * @param the routing destination service
       */
      void AddRoute(HttpRequest::RequestMethod method, QString path,
          QSharedPointer<WebService> service);

      /**
       * Get a route from the routing table
       * WARNING: returns NULL if no route is found!
       * 
       * @param the request to route
       */
      QSharedPointer<WebService> GetRoute(HttpRequest &request);

    signals:
      /**
       * Indicates that the user has stopped the
       * web server 
       */
      void Stopped();
    
    public slots:
      /**
       * Called when a WebService finishes processing
       * a WebRequest. This slot serializes the request,
       * writes it out to the socket, and cleans up
       * the memory.
       * @param wrp the web request finished being handled
       * @param format whether to package using default packager (true) or
       * leave as raw
       */
      void HandleFinishedWebRequest(QSharedPointer<WebRequest> wrp, bool format);

      /**
       * Stop the web server 
       */
      void Stop();

    /* We keep these private because the sender() for
     * each must be a QTcpSocket object 
     */
    private slots:
      /**
       * Called when socket is ready to be read
       */
      void ReadFromClient();

      /**
       * Called when socket is disconnected
       */
      void DiscardClient();

      /**
       * Handle a socket error
       */
      void HandleError(QAbstractSocket::SocketError);

    private:
      QHostAddress _host;
      quint16 _port;

      /** Map of (RequestMethod, URLPath) -> WebService* */
      QHash<QPair<HttpRequest::RequestMethod, QString>, QSharedPointer<WebService> > _routing_table; 

      /** Used to see if a service has already been added to the
       * routing table */
      QList<QSharedPointer<WebService> > _service_set;

      bool _running;
  };
}
}

#endif
