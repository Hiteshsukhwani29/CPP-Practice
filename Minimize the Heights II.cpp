sort(arr,arr+n);
    int mx=0,mn,ans=INT_MAX;
    arr[0]+=k;
    for(int j=1; j<=n; j++){
        if(arr[j]<k){
            arr[j]+=k;
            continue;
        }
        mn=min(arr[0],arr[j]-k);
        mx=max(arr[j-1],arr[n-1]-k);
        arr[j]+=k;
        ans=min(ans,mx-mn);
    }
    ans=min(ans,arr[n-1]-arr[0]);
    return ans;
}
