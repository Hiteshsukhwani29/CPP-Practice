#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        map<int,int>m;
        for(int i=0;i<a;i++){
            int b;
            cin>>b;
            m[b]++;
        }
        int mx=INT_MIN;
        for(auto &x:m){
            mx=max(mx,x.second);
        }
        if(mx==1){
	        mx++;
        }
        if(a<=2){
            cout<<0<<endl;
        }
        else{
            cout<<a-mx<<endl;
        }
    }

}
