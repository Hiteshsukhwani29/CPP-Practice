class Solution {
public:
    int climbStairs(int n) {
        long int f1 = 1, f2 = 1;
        while (n--){
            f2 += f1;
            f1 = f2 - f1;
        }
        return f1;
    }
};
