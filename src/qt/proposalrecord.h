// Copyright (c) 2011-2013 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_PROPOSALRECORD_H
#define BITCOIN_QT_PROPOSALRECORD_H

#include "amount.h"
#include "uint256.h"

#include <QList>
#include <QString>

class CWallet;

class ProposalRecord
{
public:
    ProposalRecord():
            hash(""), start_block(0), end_block(0), url(""), name(""), yesVotes(0), noVotes(0), Abstains(0), amount(0), percentage(0)
    {
    }

    ProposalRecord(QString hash, const CAmount& start_block, const CAmount& end_block,
                QString url, QString name,
                const CAmount& yesVotes, const CAmount& noVotes, const CAmount& Abstains,
                const CAmount& amount, const CAmount& percentage):
            hash(hash), start_block(start_block), end_block(end_block), url(url), name(name), yesVotes(yesVotes), noVotes(noVotes),
            Abstains(Abstains), amount(amount), percentage(percentage)
    {
    }

    QString hash;
    CAmount& start_block;
    CAmount& end_block;
    QString url;
    QString name;
    CAmount yesVotes;
    CAmount noVotes;
    CAmount Abstains;
    CAmount amount;
    CAmount percentage;
};

#endif // BITCOIN_QT_PROPOSALRECORD_H
