#include <iostream>

int main() {
    int arr[6] = {2,3,4,1,4,5};
    int n = sizeof(arr)/sizeof(int);
    for(int i=1;i<n;i++){
        int ctr=0,ctr1=0;
        int k=i-1;
    while(k>=0){
        ctr+=arr[k];
        k--;
    }
    k=i+1;
    while(k<n){
        ctr1+=arr[k];
        k++;
    }
    if(ctr==ctr1){
    std::cout<<"Index: "<<i<<std::endl;
    }
    }
    
    return 0;
}
