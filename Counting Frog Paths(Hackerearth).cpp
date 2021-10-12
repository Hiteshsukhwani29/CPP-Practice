#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n,m,s,t,ctr=0;
     cin>>n>>m>>s>>t;
     for(int i=n;i<=n+s;i++)
     {
        for(int j=m;j<=m+s;j++)
         {
             if(i+j<=t){ctr++;}
         }
     }
     cout<<ctr<<endl;
}
