#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        for(int i=0;i<n;i++){
            if(i%2==0){
                m1[str[i]]++;
            }
            else{
                m2[str[i]]++;
            }
        }
        if(m1==m2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
