#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int arr[8] = {1,2,3,2,1,0,5,4};
    int n=sizeof(arr)/sizeof(int);
    int l=arr[0],r=arr[n-1];
    int j=n-2;
    int i=1;
    while(j>=i){
        if(l>r){
            r+=arr[j];
            j--;
        }
        if(r>l){
            l+=arr[i];
            i++;
        }
        if(l==r&&j-i==0){
            cout<<"Index: "<<i<<endl;
            break;
        }
        if(l==r&&j-i>0){
            i++;
            j--;
        }
    }
    return 0;
}
