    vector<int> leaders(int a[], int n){
        vector<int> leaders;
        int max=a[n-1];
        leaders.push_back(max);
        for(int i=n-2;i>=0;i--){
            if(a[i]>=max){
                leaders.push_back(a[i]);
                max=a[i];
            }
        }
        reverse(leaders.begin(), leaders.end());
        return leaders;
    }
