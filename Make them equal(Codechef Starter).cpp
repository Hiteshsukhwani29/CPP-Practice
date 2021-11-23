#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    int arr[a],m1,m2,i;
	    m1=INT_MIN;
	    m2=INT_MAX;
	    for(i=0;i<a;i++){
	        cin>>arr[i];
	    }
	    
	    for(i=0;i<a;i++){
	        m1=max(m1,arr[i]);
	        m2=min(m2,arr[i]);
	    }
	    
	    if(m1==m2)
	    cout<<"0\n";
	    else
	    cout<<m1-m2<<endl;
	    
	}
	return 0;
}
