#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        bool flag=false;
        cin>>n>>s;
        int a[n],csum=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,greater<>());
        int k;
        for(k=0; k<n; k++)
        {
            csum+=a[k];
            if(csum>=s)
            {
                flag=true;
                break;
            }
        }
        if(flag)
            cout<<k+1<<endl;
        else
            cout<<"-1"<<endl;
    }

}
