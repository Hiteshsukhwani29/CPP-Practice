#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
    while(n--){
        unordered_set<int> s;
        for(int i=0;i<arr.size();i++){
            if (s.find(arr[i]) == s.end())
                s.insert(arr[i]);
            else
                return arr[i];
        }
    }
}
