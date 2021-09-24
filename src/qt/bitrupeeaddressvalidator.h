// Copyright (c) 2011-2020 The Bitrupee Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_BITCOINADDRESSVALIDATOR_H
#define BITCOIN_QT_BITCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class BitrupeeAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BitrupeeAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** Bitrupee address widget validator, checks for a valid bitrupee address.
 */
class BitrupeeAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BitrupeeAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // BITCOIN_QT_BITCOINADDRESSVALIDATOR_H
