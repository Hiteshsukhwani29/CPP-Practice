vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        long long  int p=1;
        int j=0;
        for(int i=0;i<n;i++){
            p*=nums[i];
        }
        vector<long long int>v;
        for(int i=0;i<n;i++){
            long long  int a=1;
            for( j=0;j<n;j++){
                if(j!=i)
                    a*=nums[j];
            }
         v.push_back(a);
       }
       return v;
    }
