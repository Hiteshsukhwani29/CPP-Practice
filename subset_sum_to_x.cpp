#include<iostream>
#include<vector>
using namespace std;

int countsubset(vector<int> arr, int n, int i, int s){

    if(i==n){
        if(s==0){
            return 1;
        }
        return 0;
    }

    int a = countsubset(arr, n, i+1, s-arr[i]);
    int b = countsubset(arr, n, i+1, s);

    return a + b;

}

int main(){

    vector<int> arr = {1,2,3,4,5};
    int x = 8;
    cout<<countsubset(arr, arr.size(), 0, x);

}
