#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> pairsum(vector<int> arr, int sum){

    unordered_set <int> s;
    vector <int> r;
    for(int i=0;i<arr.size();i++){

        int p = sum-arr[i];
        if(s.find(p)!=s.end()){
            r.push_back(p);
            r.push_back(arr[i]);
            return r;
        }
        s.insert(arr[i]);
    }
    return {};

}


int main(){

    vector<int> arr{};

    int n,sum;
    cout<<"Enter size of Array : ";
    cin>>n;
    for(int j=0;j<n;j++){
        cout<<"\nEnter Array Element : ";
        int a;
        cin>>a;
        arr.push_back(a);
    }
    cout<<"\nEnter Sum of pair : ";
    cin>>sum;
    auto p = pairsum(arr, sum);

    if(p.size()==0){
        cout<<"Not Found";
    }
    else{
        cout<<p[0]<<","<<p[1];
    }


}
