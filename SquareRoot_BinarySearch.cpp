#include<iostream>

using namespace std;

float root(int n, int t){

    int s=0,e=n;

    float ans;

while(s<=e){
    int m=(s+e)/2;
    if(m*m==n){
        return m;
    }
    else if(m*m<n){
        ans=m;
        s=m+1;
    }
    else{
        e=m-1;
    }

}

float x=0.1;
for(int i=1;i<=t;i++){

    while(ans*ans<=n){
        ans+=x;
    }
    ans=ans-x;
    x=x/10.0;

}

    return ans;


}

int main(){
    int n,t;
    cin>>n>>t;
    cout<<root(n,t);
}
