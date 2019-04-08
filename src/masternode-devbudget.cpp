// Copyright (c) 2018-2019 The STOMP Core developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <masternode-devbudget.h>

CDevBudget devbudget;

void CDevBudget::PrepareBudget() {
    CBitcoinAddress address = CBitcoinAddress(Params().GetDevFundAddress());
    payee = GetScriptForDestination(address.Get());

    LogPrint("debug","CDevBudget::PrepareBudget(): %s\n", address.ToString());
}

bool CDevBudget::IsTransactionValid(const CTransaction& txNew, int nBlockHeight)
{
    PrepareBudget();

    CBlockIndex* pindexPrev = chainActive.Tip();
    if (!pindexPrev){
        return false;
    }

    CAmount blockreward = GetBlockValue(pindexPrev->nHeight);
    CAmount budgetPayment = GetDevelopersPayment(pindexPrev->nHeight, blockreward, txNew.IsZerocoinSpend());

    bool found = false;
    int i = 0;
    
    BOOST_FOREACH (CTxOut out, txNew.vout) {
        if (payee == out.scriptPubKey) {
            if (i > 0 && out.nValue >= budgetPayment) {
                found = true;
            }
            else{
                LogPrintf("CDevBudget::IsTransactionValid - Found valid Dev Budget address, but nHeight:%d amount %d expected:%d\n", pindexPrev->nHeight, out.nValue, budgetPayment);
            }
        }
        i++;
    }

    if (!found) {
        LogPrint("debug","CDevBudget::IsTransactionValid - Missing required payment %d for block %d\n", budgetPayment, pindexPrev->nHeight);
    }

    return found;
}
