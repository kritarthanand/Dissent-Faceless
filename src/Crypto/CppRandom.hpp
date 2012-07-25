#ifndef DISSENT_CRYPTO_CPP_RANDOM_H_GUARD
#define DISSENT_CRYPTO_CPP_RANDOM_H_GUARD

#include <QScopedPointer>
#include <cryptopp/osrng.h> 

#include "Utils/Random.hpp"

namespace Dissent {
namespace Crypto {
  /**
   * Implementation of Random using CryptoPP
   */
  class CppRandom : public Utils::Random {
    public:
      /**
       * Constructor
       * @param seed optional seed
       */
      explicit CppRandom(const QByteArray &seed = QByteArray(), uint index = 0);

      /**
       * Destructor
       */
      virtual ~CppRandom() {}

      /**
       * Returns the optimal seed size, less than will provide suboptimal
       * results and greater than will be compressed into the chosen seed.
       */
      static uint OptimalSeedSize() { return CryptoPP::AES::DEFAULT_KEYLENGTH; }

      virtual int GetInt(int min = 0, int max = RAND_MAX);
      virtual void GenerateBlock(QByteArray &data);
      CryptoPP::RandomNumberGenerator *GetHandle() { return _rng.data(); }
    private:
      QScopedPointer<CryptoPP::RandomNumberGenerator> _rng;
  };
}
}

#endif
