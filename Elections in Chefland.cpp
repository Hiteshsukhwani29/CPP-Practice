#include<iostream>

using namespace std;

int main(){

    int t,s1=0,s2=0;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>50){
            cout<<"A"<<endl;
        }
        if(b>50){
            cout<<"B"<<endl;
        }
        if(c>50){
            cout<<"C"<<endl;
        }
        if(a<=50&&b<=50&&c<=50){
            cout<<"NOTA"<<endl;
        }
        

    }

}
