// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2018 The Bitrupee Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_SCRIPT_BITCOINCONSENSUS_H
#define BITCOIN_SCRIPT_BITCOINCONSENSUS_H

#include <stdint.h>

#if defined(BUILD_BITCOIN_INTERNAL) && defined(HAVE_CONFIG_H)
#include <config/bitrupee-config.h>
  #if defined(_WIN32)
    #if defined(HAVE_DLLEXPORT_ATTRIBUTE)
      #define EXPORT_SYMBOL __declspec(dllexport)
    #else
      #define EXPORT_SYMBOL
    #endif
  #elif defined(HAVE_DEFAULT_VISIBILITY_ATTRIBUTE)
    #define EXPORT_SYMBOL __attribute__ ((visibility ("default")))
  #endif
#elif defined(MSC_VER) && !defined(STATIC_LIBBITCOINCONSENSUS)
  #define EXPORT_SYMBOL __declspec(dllimport)
#endif

#ifndef EXPORT_SYMBOL
  #define EXPORT_SYMBOL
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define BITCOINCONSENSUS_API_VER 1

typedef enum bitrupeeconsensus_error_t
{
    bitrupeeconsensus_ERR_OK = 0,
    bitrupeeconsensus_ERR_TX_INDEX,
    bitrupeeconsensus_ERR_TX_SIZE_MISMATCH,
    bitrupeeconsensus_ERR_TX_DESERIALIZE,
    bitrupeeconsensus_ERR_AMOUNT_REQUIRED,
    bitrupeeconsensus_ERR_INVALID_FLAGS,
} bitrupeeconsensus_error;

/** Script verification flags */
enum
{
    bitrupeeconsensus_SCRIPT_FLAGS_VERIFY_NONE                = 0,
    bitrupeeconsensus_SCRIPT_FLAGS_VERIFY_P2SH                = (1U << 0), // evaluate P2SH (BIP16) subscripts
    bitrupeeconsensus_SCRIPT_FLAGS_VERIFY_DERSIG              = (1U << 2), // enforce strict DER (BIP66) compliance
    bitrupeeconsensus_SCRIPT_FLAGS_VERIFY_NULLDUMMY           = (1U << 4), // enforce NULLDUMMY (BIP147)
    bitrupeeconsensus_SCRIPT_FLAGS_VERIFY_CHECKLOCKTIMEVERIFY = (1U << 9), // enable CHECKLOCKTIMEVERIFY (BIP65)
    bitrupeeconsensus_SCRIPT_FLAGS_VERIFY_CHECKSEQUENCEVERIFY = (1U << 10), // enable CHECKSEQUENCEVERIFY (BIP112)
    bitrupeeconsensus_SCRIPT_FLAGS_VERIFY_WITNESS             = (1U << 11), // enable WITNESS (BIP141)
    bitrupeeconsensus_SCRIPT_FLAGS_VERIFY_ALL                 = bitrupeeconsensus_SCRIPT_FLAGS_VERIFY_P2SH | bitrupeeconsensus_SCRIPT_FLAGS_VERIFY_DERSIG |
                                                               bitrupeeconsensus_SCRIPT_FLAGS_VERIFY_NULLDUMMY | bitrupeeconsensus_SCRIPT_FLAGS_VERIFY_CHECKLOCKTIMEVERIFY |
                                                               bitrupeeconsensus_SCRIPT_FLAGS_VERIFY_CHECKSEQUENCEVERIFY | bitrupeeconsensus_SCRIPT_FLAGS_VERIFY_WITNESS
};

/// Returns 1 if the input nIn of the serialized transaction pointed to by
/// txTo correctly spends the scriptPubKey pointed to by scriptPubKey under
/// the additional constraints specified by flags.
/// If not nullptr, err will contain an error/success code for the operation
EXPORT_SYMBOL int bitrupeeconsensus_verify_script(const unsigned char *scriptPubKey, unsigned int scriptPubKeyLen,
                                                 const unsigned char *txTo        , unsigned int txToLen,
                                                 unsigned int nIn, unsigned int flags, bitrupeeconsensus_error* err);

EXPORT_SYMBOL int bitrupeeconsensus_verify_script_with_amount(const unsigned char *scriptPubKey, unsigned int scriptPubKeyLen, int64_t amount,
                                    const unsigned char *txTo        , unsigned int txToLen,
                                    unsigned int nIn, unsigned int flags, bitrupeeconsensus_error* err);

EXPORT_SYMBOL unsigned int bitrupeeconsensus_version();

#ifdef __cplusplus
} // extern "C"
#endif

#undef EXPORT_SYMBOL

#endif // BITCOIN_SCRIPT_BITCOINCONSENSUS_H
