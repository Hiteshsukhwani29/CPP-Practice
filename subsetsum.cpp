#include <iostream>
#include <vector>
using namespace std;

int countsum(vector<int> arr, int n,int i, int x){
    if(i==n){
        if(x==0){
            return 1;
        }
        return 0;
    }
        
    return countsum(arr, n, i+1, x-arr[i])+countsum(arr, n, i+1, x);
}

int main(int argc, const char * argv[]) {
    vector<int> arr{1,2,3,4,5};
    int x=6;
    cout<<countsum(arr, 5, 0, x);
    return 0;
}
