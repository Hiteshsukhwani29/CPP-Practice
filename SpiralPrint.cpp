#include<iostream>
using namespace std;

void spiral(int a[][100], int n, int m){
    int startRow=0,startCol=0,endRow=n-1,endCol=m-1;
    while(startCol<=endCol && startRow<=endRow){
    for(int col=startCol;col<=endCol;col++){
        cout<<a[startRow][col]<<" ";
    }
    for(int row=startRow+1;row<=endRow;row++){
        cout<<a[row][endCol]<<" ";
    }
    for(int col=endCol-1;col>=startCol;col--){
            if(startRow==endRow)
            break;
        cout<<a[endRow][col]<<" ";
    }
    for(int row=endRow-1;row>startRow;row--){
            if(startCol==endCol)
            break;
        cout<<a[row][startCol]<<" ";
    }
    startRow++;
    startCol++;
    endRow--;
    endCol--;
}
}

int main(){
int a[100][100]={
    {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}
};
int n=5,m=4;
spiral(a,n,m);
}
