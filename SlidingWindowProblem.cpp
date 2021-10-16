#include<iostream>
#include<vector>
using namespace std;

void housing(vector<int> arr, int s){

    int k=0,cs=arr[0];
    for(int i=1;i<arr.size();i++){

        cs = arr[i]+cs;
        while(cs>s){
            cs=cs-arr[k];
            k++;
        }
        if(cs==s){
            cout<<k<<","<<i<<endl;
        }

    }

}

int main(){

    vector<int> arr = {1,3,2,1,4,1,3,2,1,1,2};
    int s = 8;
    housing(arr,s);

}
