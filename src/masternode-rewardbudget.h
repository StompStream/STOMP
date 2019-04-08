// Copyright (c) 2018 The STOMP Foundation developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MASTERNODE_REWARDBUDGET_H
#define MASTERNODE_REWARDBUDGET_H

#include "main.h"
#include "masternode.h"
#include "utilmoneystr.h"
#include <base58.h>

class CRewardBudget;

extern CRewardBudget rewardbudget;

//
// Reward Budget
//
class CRewardBudget
{
private:
    CScript payee;

public:
    void PrepareBudget();
    bool IsTransactionValid(const CTransaction& txNew, int nBlockHeight);
    void FillBlockPayee(CMutableTransaction& txNew, int64_t nFees, bool fProofOfStake);
};

#endif // MASTERNODE_REWARDBUDGET_H
