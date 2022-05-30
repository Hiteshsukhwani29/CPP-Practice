// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int pairCubeCount(int N) {
        int ctr=0;
        for(int i=0;i<=cbrt(N);i++){
            for(int j=1;j<=cbrt(N);j++){
                if((i*i*i)+(j*j*j)==N){
                    ctr++;
                }
            }
        }
        return ctr;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.pairCubeCount(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
