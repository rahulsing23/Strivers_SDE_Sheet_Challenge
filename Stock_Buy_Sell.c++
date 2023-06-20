#include <bits/stdc++.h> 
using namespace std;
int maximumProfit(vector<int> &prices){
    int maxprofit=0,currbuy=prices[0];
    for(int i=1;i<prices.size();i++)
    {
        int stock = prices[i];
        if(stock<currbuy)
        {
            currbuy=stock;

        }
        int profit = stock-currbuy;
        if(profit>maxprofit)
        {
            maxprofit = profit;
        }
    }
    
    return maxprofit;
}