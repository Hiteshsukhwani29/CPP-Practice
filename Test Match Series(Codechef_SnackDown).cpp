#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a[5],ctr1=0,ctr2=0;
	    for(int i=0;i<5;i++){
	        cin>>a[i];
	        if(a[i]==1)
	        ctr1++;
	        if(a[i]==2)
	        ctr2++;
	    }
	    if(ctr1>ctr2)
	        cout<<"INDIA"<<endl;
	    else if(ctr2>ctr1)
	        cout<<"ENGLAND"<<endl;
	    else
	        cout<<"DRAW"<<endl;
	}
	return 0;
}
