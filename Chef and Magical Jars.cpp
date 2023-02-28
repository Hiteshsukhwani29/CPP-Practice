#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int m=0;
        for(int i=0;i<n;i++){
            long long int a;
            cin>>a;
            m+=a-1;
        }
        cout<<m+1<<endl;
    }
}
