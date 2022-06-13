#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {
    int lsum=0;
    for(int i=0;i<arr.size();i++){
        int csum=0;
        for(int j=i;j<arr.size();j++){
            csum+=arr[j];
            if(csum==0){
                lsum=max(lsum,j-i+1);
            }
        }
    }
    return lsum;
}
