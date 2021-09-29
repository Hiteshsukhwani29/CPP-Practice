/*
Fixed number of Fixed Points

Given a positive integer n and an integer k such that 0≤k≤n, find any permutation A of 1,2…n such that the number of indices for which Ai=i is exactly k. 
If there exists no such permutation, print −1. If there exist multiple such permutations, print any one of them.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >> k;
        if(n - 1 == k) cout << -1 << "\n";
        else if(n == k){
            for(int i = 1 ; i <= k ; i++){
                cout << i << " ";
            }
            cout << "\n";
        }
        else{
            int diff = n - k;
            for(int i = 2 ; i <= diff ; i++){
                cout << i << " ";
            }
            cout << 1 << " ";
            for(int i = diff + 1 ; i <= n ; i++) cout << i << " ";
            cout << "\n";
        }
    }
}
