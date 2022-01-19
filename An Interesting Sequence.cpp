#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int a,b=0;
        cin>>a;
        while(a%2==0){
            a=a/2;
            b++;
        }
        cout<<b<<endl;
    }

}
