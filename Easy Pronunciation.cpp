#include<iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ctr=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                ctr=0;
            }
            else{
                ctr++;
            }
            if(ctr==4){
                cout<<"NO"<<endl;
                break;
            }
        }
        if(ctr<4){
        cout<<"YES"<<endl;
        }
    }

}
