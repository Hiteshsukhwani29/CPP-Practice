void reverseInGroups(vector<long long>& arr, int n, int k){
        int i = 0;
        while(i+k<n){
            reverse(arr.begin()+i,arr.begin()+i+k);
            i=i+k;
        }
        reverse(arr.begin()+i,arr.end());
    }
