#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr;
	    int m1,m2;
	    int p = pow(2,n);

	    for(int i=0;i<p;i++){
            int a;
            cin>>a;
            arr.push_back(a);
	    }

	    m1 = *max_element(arr.begin(),arr.end());
	    m2 = *min_element(arr.begin(),arr.end());

	    if(m1-m2<=1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
	}
	return 0;
}
