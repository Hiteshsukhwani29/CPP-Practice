#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        long long int n,m;
        cin>>n>>m;
        int x = n/__gcd(n,m);
        if(x!=n){
            cout<<"No "<<x<<"\n";
        }
        else{
            cout<<"Yes\n";
        }
        
    }

}
