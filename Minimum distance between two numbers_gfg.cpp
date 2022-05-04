int minDist(int a[], int n, int x, int y) {
        int p=-1,q=-1,m=INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i]==x)
            p=i;
            if(a[i]==y)
            q=i;
            
            if(p!=-1&&q!=-1){
                m=min(m,abs(p-q));
            }
        }
        if(p==-1||q==-1)
        return -1;
        else
        return m;
}
