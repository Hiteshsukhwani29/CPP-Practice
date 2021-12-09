#include<iostream>

using namespace std;

int getithbit(int i, int n){

    int mask=(1<<i);
    return (n & mask) > 0?1:0;

}

int main(){

    //odd even
    /*int a;
    cin>>a;
    if(a&1){
        cout<<"Odd";
    }
    else{
        cout<<"Even";
    }*/

    //get Ith Bit
    int n=3;
    int i;
    cin>>i;

    cout<<getithbit(i,n);

}
