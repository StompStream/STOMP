// Copyright (c) 2018-2019 The STOMP Core developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <masternode-rewardbudget.h>

CRewardBudget rewardbudget;

void CRewardBudget::PrepareBudget() {
    CBitcoinAddress address = CBitcoinAddress(Params().GetRewardFundAddress());
    payee = GetScriptForDestination(address.Get());

    LogPrint("debug","CRewardBudget::PrepareBudget(): %s\n", address.ToString());
}

bool CRewardBudget::IsTransactionValid(const CTransaction& txNew, int nBlockHeight)
{
    PrepareBudget();

    CBlockIndex* pindexPrev = chainActive.Tip();
    if (!pindexPrev){
        return false;
    }

    if(txNew.IsZerocoinSpend()){
        return true;
    }

    CAmount blockreward = GetBlockValue(pindexPrev->nHeight);
    CAmount budgetPayment = GetRewardsPayment(pindexPrev->nHeight, blockreward, txNew.IsZerocoinSpend());

    bool found = false;
    int i = 0;
    
    BOOST_FOREACH (CTxOut out, txNew.vout) {
        if (payee == out.scriptPubKey) {
            if (i > 0 && out.nValue >= budgetPayment) {
                found = true;
            }
            else{
                LogPrintf("CRewardBudget::IsTransactionValid - Found valid Reward Budget address, but nHeight:%d amount %d expected:%d\n", pindexPrev->nHeight, out.nValue, budgetPayment);
            }
        }
        i++;
    }

    if (!found) {
        LogPrint("debug","CRewardBudget::IsTransactionValid - Missing required payment %d for block %d\n", budgetPayment, pindexPrev->nHeight);
    }

    return found;
}
