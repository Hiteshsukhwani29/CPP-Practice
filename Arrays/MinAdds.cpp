#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int T;
    cin>>T;
    assert(1<=T && T<=10);
    while(T--)
    {
        int N, K;
        cin>>N>>K;
        assert(1<=N && N<=5e5);
        int i;
        int a[N+1];
        int s=0;
        for(i=1;i<=N;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        int add = 1 + s/(K+1)-N;
        add = max(add, 0LL);
        cout << add << '\n';
    }
    return 0;
}