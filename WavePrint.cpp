#include<iostream>
using namespace std;

void wave(int a[][10],int n,int m){
    int startCol=0,endCol=m-1,startRow=0,endRow=n-1;
    while(endCol>=0){
    for(int row=startRow;row<n;row++){
        cout<<a[row][endCol];
        cout<<" ";
    }
    endCol--;
    if(endCol!=-1){
    for(int row=endRow;row>=0;row--){
        cout<<a[row][endCol];
        cout<<" ";
    }
    endCol--;
    }
    }
}

int main(){
int a[][10]={
    {1,2,3,4,4},{5,6,7,8,3},{9,10,11,12,2},{13,14,15,16,1}
};
int n=4,m=5;
wave(a,n,m);
}
