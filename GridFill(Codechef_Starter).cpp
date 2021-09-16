/*
You are given a N × N grid. You need to fill each cell of the grid with 1 or −1. You need to fill the grid in a way such that the following conditions are met :-

For every column - (Sum of values present in the column) x (Product of values present in the column) < 0
For every row - (Sum of values present in the row) x (Product of values present in the row) < 0
It is guaranteed that there exists at least one way to fill the grid under given constraints such that both the conditions are satisifed. If there exists multiple ways to fill the grid by satisfying both the conditions, you can print any
*/


#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n&1){
	        vector<vector<int>>arr(n,vector<int>(n,1));
	        
	        int s=0;
	        for(int i=0;i<n;i++){
	            arr[i][s] = -1;
	            s++;
	        }
	        for(int i=0;i<n;i++){
	            for(int j=0;j<n;j++){
	            cout<<arr[i][j]<<" ";
	        }
	        cout<<"\n";
	        }
	        
	    }
	    else{
	        vector<vector<int>>arr(n,vector<int>(n,-1));
	        for(int i = 0;i<n; i++){
	            for(int j=0;j<n;j++){
	                cout<<arr[i][j]<<" ";
	            }
	            cout<<"\n";
	        }
	    }
	}
	return 0;
}
