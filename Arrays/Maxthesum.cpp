#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int T;
    cin >> T;
    while(T--)
    {
        int N, K;
        cin >> N >> K;
        multiset<ll> sum;
        int i;
        vector<int> vec(N);
        for(i=0;i<N;i++)
            cin >> vec[i];
        sort(vec.begin(), vec.end());
        for(i=0;i<N;i++)
        {
            int j = i;
            while(j < N && vec[j] == vec[i])
                j++;
            sum.insert((j - i)*1ll*vec[i]);
            i = j - 1;
        }
        ll s = 0;
        int cnt = 0;
        while(sum.size() && cnt < K)
        {
            ll ele = *sum.rbegin();
            if(ele <= 0)
                break;
            s+=ele;
            cnt++;
            sum.erase(sum.find(ele));
        }
        cout << s << '\n';
    }
}      