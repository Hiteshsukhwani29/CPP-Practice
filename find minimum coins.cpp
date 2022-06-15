int findMinimumCoins(int amount) 
{
    int a[]={1000,500,100,50,20,10,5,2,1};
    int ctr=0;
    
    for(int i=0;amount!=0;i++) {
        while(amount>=a[i]) {
            amount-=a[i];
            ctr++;
        }
    }
    return ctr;
}
