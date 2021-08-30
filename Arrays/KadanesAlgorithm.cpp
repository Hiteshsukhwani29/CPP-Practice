#include<iostream>
using namespace std;

void largestsubarray(int a[],int n){

int csum=0;
int lsum=0;
for(int i=0;i<n;i++){
        csum=csum+a[i];
    if(csum<0){
    csum=0;
    }
    lsum=max(csum,lsum);
}
cout<<lsum;
}

int main(){
int a[]={-2,3,4,-1,5,-12,6,1,3};
int n=sizeof(a)/sizeof(int);

largestsubarray(a,n);
}
