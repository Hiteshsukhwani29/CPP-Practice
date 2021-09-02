#include<iostream>
using namespace std;

void bubblesort(int a[],int n){
       bool test_check = true;
for(int i=0;i<n;i++){

    for(int j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
            cout<<"swap no. "<<i<<","<<j<<endl;
            test_check = false;
            }
    }
     if(test_check == true){

            break;

        }
}
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}

int main(){
int a[]={12,3,1,3,1,4};
int n=sizeof(a)/sizeof(int);
bubblesort(a,n);
}
