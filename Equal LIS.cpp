#include<iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        
        if(a%2!=0){
            cout<<"YES\n";
            for(int i=1;i<=(a/2);i++){
                cout<<i<<" ";
            }
            cout<<a<<" ";
            for(int i=a-1;i>a/2;i--){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else if(a!=2){
            cout<<"YES\n"<<a/2<<" ";
            for(int i=1;i<a/2;i++){
                cout<<i<<" ";
            }
            for(int i=a;i>a/2;i--){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else {
            cout<<"NO\n";
        }
    }

}
