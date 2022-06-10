#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    int i=0,flag=0;
    
    while(i<m){
        if(mat[i][n-1]>=target){
            for(int j=0;j<n;j++){
                if(mat[i][j]==target)
                    return true;
            }
        }
        i++;
    }
    return false;
}
