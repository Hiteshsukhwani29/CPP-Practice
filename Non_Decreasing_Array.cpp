#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n , i ;
		cin >> n;
		ll a[n];
		for(i = 0 ; i < n ; i++) {
            cin >> a[i];
        }
		cout << a[0] << " ";
		ll p = a[0];
		for(i = 1 ; i < n ; i++){
			ll k = p / a[i];
			if(p % a[i] != 0) {
                k++;
            }
			cout << a[i] * k << " " ;
			p = a[i] * k;
		}
		cout << "\n";
	}
}
