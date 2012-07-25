#ifndef DISSENT_CRYPTO_CPP_PRIVATE_KEY_H_GUARD
#define DISSENT_CRYPTO_CPP_PRIVATE_KEY_H_GUARD

#include <QByteArray>
#include <QDebug>
#include <QString>

#include "CppPublicKey.hpp"

namespace Dissent {
namespace Crypto {
  /**
   * Implementation of PrivateKey using CryptoPP
   */
  class CppPrivateKey : public CppPublicKey {
    public:
      /**
       * Creates a new random key
       */
      explicit CppPrivateKey();

      /**
       * Destructor
       */
      virtual ~CppPrivateKey() {}

      /**
       * Creates a private key based upon the seed data, same seed data same
       * key.  This is mainly used for distributed tests, so other members can
       * generate an appropriate public key.
       */
      static CppPrivateKey *GenerateKey(const QByteArray &data);

      CppPrivateKey(const QString &filename);
      CppPrivateKey(const QByteArray &data);

      virtual QByteArray Sign(const QByteArray &data) const;
      virtual QByteArray Decrypt(const QByteArray &data) const;
      inline virtual bool IsPrivateKey() const { return true; }

    protected:
      const CryptoPP::RSA::PrivateKey *_private_key;
  };
}
}

#endif
