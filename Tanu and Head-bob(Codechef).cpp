#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,flag=0,flag2=0;
	    cin>>n;
	    char a[n];
	    for(int i=0;i<n;i++){
	    cin>>a[i];
	    if(a[i]=='I')
	    flag=1;
	    if(a[i]=='Y')
	    flag2=1;
	    }
	    if(flag!=0){
	    cout<<"INDIAN"<<endl;}
	    if(flag==0&&flag2!=0){
	    cout<<"NOT INDIAN"<<endl;}
	    if(flag==0&&flag2==0){
	    cout<<"NOT SURE"<<endl;}
	    }
	return 0;
}
