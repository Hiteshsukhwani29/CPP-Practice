
/*

https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/count-pairs-9-d69fcdc3/

*/


#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,p;
        scanf("%d",&n);
        scanf("%d",&k);
        scanf("%d",&p);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int s=0;
        int counter=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            s=(a[i]*a[i])+(a[j]*a[j])+(a[i]*a[j]);
            if(s%p==k)
                counter++;

            }

        }
        printf("%d\n",counter);
    }
}
