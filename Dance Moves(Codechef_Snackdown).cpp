#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int a,b;
        long long int ctr=0;
        cin>>a>>b;
        if(a>b){
            ctr=abs(a-b);
        }
        else{
            if((b-a)%2==0){
                ctr=(b-a)/2;
            }
            else{
                ctr=(b-a)/2+2;
            }
        }
        cout<<ctr<<endl;
    }

}
