#include<iostream>
#include<vector>

using namespace std;

void inversions(vector<int> arr){

    int n = arr.size();
    int i,j,ctr=0;

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            ctr++;
            cout<<arr[i]<<","<<arr[j]<<endl<<endl;
        }
    }
    }
    cout<<ctr;

}

int main(){

    vector<int> arr = {0,5,2,3,1};

    inversions(arr);

}
