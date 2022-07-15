class Solution {
public:
    int fib(int n) {
        int arr[2]={0,1};
        for(int i=2;i<=n;i++){
            arr[i%2]=arr[0]+arr[1];
        }
        return arr[n%2];
    }
};
