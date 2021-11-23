#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
    int a,b,c=0;
    cin>>a>>b;
    if(a%b==0){
        cout<<a/b<<endl;
    }
    else{
        c = a/b;
        cout<<c+1<<endl;
    }
}
}
