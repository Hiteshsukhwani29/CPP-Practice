#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
    sort(arr.begin(),arr.end());
    vector<vector<int>> a;
    int k=0;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==s){
                a.push_back(vector<int>{min(arr[i],arr[j]),max(arr[i],arr[j])});
            }
        }
    }
    return a;
}
