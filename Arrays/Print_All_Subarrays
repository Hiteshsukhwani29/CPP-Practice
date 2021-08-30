#include<iostream>
using namespace std;

//Problem : Print all subarrays of a given array

void subarray(int arr[],int n){
    int p=0;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        for(int k=i;k<=j;k++){
                p=p+arr[k];
            cout<<arr[k]<<" ";
        }
        cout<<"\n"<<p;
        p=0;
        cout<<endl;
    }
}
}

int main(){
int arr[]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(int);
subarray(arr,n);
}
