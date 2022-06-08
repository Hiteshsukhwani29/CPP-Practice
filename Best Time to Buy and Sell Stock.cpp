#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int m=INT_MAX,k=0;
    for(int i=0;i<prices.size();i++){
        if(prices[i]<m){
            m=prices[i];
        }
        if(k<prices[i]-m){
            k=prices[i]-m;
        }
    }
  return k;
}
