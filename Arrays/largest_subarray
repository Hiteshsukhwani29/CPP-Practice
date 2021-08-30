#include<iostream>
using namespace std;

// Prefix Sum Approach O(N^2)

void largest_subarray(int a[],int n){
    int p[100]={0};
    p[0]=a[0];
    int largest=0;

for(int i=1;i<n;i++){
    p[i]=p[i-1]+a[i];
}

for(int i=0;i<n;i++){

        for(int j=i;j<=n;j++){
                int subarray=i>0?p[j]-p[i-1]:p[j];

            largest=max(largest,subarray);
        }
}
cout<<largest;
}

int main(){
int a[]={10,-5,30,-40,20};
int n=sizeof(a)/sizeof(int);
largest_subarray(a,n);
}
