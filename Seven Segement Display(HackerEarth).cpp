#include<iostream>
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--){
		long long int ms=0;
		string n;
		cin>>n;
		for(int i=0; i<n.length(); i++){
		switch(n[i]){
			case '0': ms+=6;break;
			case '1': ms+=2;break;
			case '2': ms+=5;break;
			case '3': ms+=5;break;
			case '4': ms+=4;break;
			case '5': ms+=5;break;
			case '6': ms+=6;break;
			case '7': ms+=3;break;
			case '8': ms+=7;break;
			case '9': ms+=6;break;
		}
		}
		if(ms%2==1){
			cout<<7;
			ms=ms-3;
			}
		for(int i=0; i<ms/2; i++){
			cout<<1;
			}
		cout<<endl;
		}
	

}
