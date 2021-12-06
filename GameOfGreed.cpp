#include<iostream>

using namespace std;

bool divide(int arr[],int n,int s, int Min){

    int p=0;
    int ctr=0;

    for(int i=0;i<=n;i++){
        if(ctr+arr[i]>=Min){
            p++;
            ctr=0;
        }
        else{
            ctr+=arr[i];
        }
    }
    return p>=s;
}

int min_partition(int arr[],int n,int s){

    int Start=0,End=0,x;

    for(int i=0;i<n;i++){
        End+=arr[i];
    }

    while(Start<=End){

        int Mid=(Start+End)/2;
        bool flag=divide(arr,n,s,Mid);

        if(flag){
            Start=Mid+1;
            x=Mid;
        }
        else{
            End=Mid-1;
        }

    }
    return x;

}

int main(){

    int arr[]={1,2,3,4};
    int s=3;

    cout<<min_partition(arr,sizeof(arr)/sizeof(int),s);

}
