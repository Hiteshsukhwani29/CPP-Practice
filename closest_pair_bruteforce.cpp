#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    
    vector<vector<int>> arr = {{0,1},{1,2},{2,3},{5,8},{9,10}};
    float m=INT_MAX;
    int k,l;
    for(int i=0;i<arr.size();i++){
        int arr1 = arr[i][0];
        int arr2 = arr[i][1];
        for(int j=i+1;j<arr.size();j++){
            float m1 = sqrt(((arr[j][0]-arr1)*(arr[j][0]-arr1))+((arr[j][1]-arr2)*(arr[j][1]-arr2)));
            if(m1<m){
                m=m1;
                k=i;
                l=j;
            }
        }
    }
    cout<<"Index "<<k<<","<<l<<" is the closest pair";
    return 0;
}
