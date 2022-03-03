#include<iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int ctr1=b,ctr2=c;
        for(int i=0;i<a;i++){
            string s;
            cin>>s;
            if(s[0]=='E'||s[0]=='Q'||s[0]=='U'||s[0]=='I'||s[0]=='N'||s[0]=='O'||s[0]=='X'){
                ctr1++;
            }
            else{
                ctr2++;
            }
        }
        if(ctr1==ctr2)
        cout<<"DRAW"<<endl;
        else if(ctr1>ctr2)
        cout<<"SARTHAK"<<endl;
        else if(ctr1<ctr2)
        cout<<"ANURADHA"<<endl;
    }
}
