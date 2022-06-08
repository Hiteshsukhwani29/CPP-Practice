#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long int csum=0;
    long long int lsum=0;
    for(int i=0;i<n;i++){
        csum=csum+arr[i];
        if(csum<0){
            csum=0;
        }
        lsum=max(csum,lsum);
    }
    return lsum;
}
