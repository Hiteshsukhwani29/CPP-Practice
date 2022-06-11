#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
    int csum=0,i,k;
    for(i=0;i<n;i++){
        if(csum==0) k=arr[i];
        if(k==arr[i]) csum++;
        else csum--;
    }
    csum=0;
    for(i=0;i<n;i++)
        if(arr[i]==k) 
            csum++;
    if(csum>n/2)
        return k;
    else return -1;
}
