#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int s=-1,a[n];
    for(int i=0 ;i<n;i++) {
        cin>>a[i];
        if(s==-1) 
            s=a[i];
        else 
            s=__gcd(s,a[i]);
    }
    for(int i=0;i<n;i++) {
    cout<<(a[i]/s)<<" ";
    }
    cout<<endl;
    }
}
