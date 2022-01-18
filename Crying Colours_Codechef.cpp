#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[3],b[3],c[3],t1=0,t2=0;
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        for(int i=0;i<3;i++){
            cin>>b[i];
        }
        for(int i=0;i<3;i++){
            cin>>c[i];
        }
        t1=a[1]+a[2]+b[2];
        t2=b[0]+c[0]+c[1];
        cout<<max(t1,t2)<<endl;

    }

}
