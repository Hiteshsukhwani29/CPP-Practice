#include<iostream>
#include<algorithm>
using namespace std;

void minpair(vector<int> arr1, vector<int> arr2){

    sort(arr2.begin(),arr2.end());

int p1,p2,d=INT_MAX;
    for(int i: arr1){
        auto lb=lower_bound(arr2.begin(),arr2.end(),i)-arr2.begin();

        if(lb>=1 and i-arr2[lb-1]<d){
            d=i-arr2[lb-1];
            p2=i;
            p1=arr2[lb-1];
        }

        if(lb!=arr2.size() and arr2[lb]-i<d){
            d=arr2[lb-1]-i;
            p1=i;
            p2=arr2[lb];
        }


    }
    cout<<p1<<p2<<d;

}

int main(){

    vector<int> arr1={-1,5,10,20,3};
    vector<int> arr2={26,134,135,15,17};

    minpair(arr1,arr2);


}
