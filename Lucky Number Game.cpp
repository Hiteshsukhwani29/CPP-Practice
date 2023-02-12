#include<iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int f=0;
        int arr[n];
        int p=0,q=0,pq=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%a==0 && arr[i]%b==0){
                pq++;
            }
            if(arr[i]%a==0){
                p++;
            }
            if(arr[i]%b==0){
                q++;
            }
        }
        p+=pq>0?1:0;
        if(p>q) cout<<"BOB"<<endl;
        else cout<<"ALICE"<<endl;
    }
}
