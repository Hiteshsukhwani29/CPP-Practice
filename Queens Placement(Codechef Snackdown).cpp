#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s=0,ctr=0;
        if(n==3){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i==1&&j==1){
                        cout<<"Q";}
                    else{
                        cout<<".";}
                }
                cout<<endl;
            }
        }
        else{
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i==s&&j==s&&ctr!=3){
                        cout<<"Q";
                        s=s+2;
                        ctr++;
                    }
                    else if(i==j&&ctr==3){
                        cout<<"Q";
                    }
                    else{
                        cout<<".";
                    }
                }
                cout<<endl;
        }

    }
    }
    return 0;
}
