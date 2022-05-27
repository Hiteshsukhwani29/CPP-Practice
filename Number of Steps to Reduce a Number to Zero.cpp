class Solution {
public:
    int numberOfSteps(int num) {
        int ctr=0;
        while(num>0){
            if(num%2==0){
                ctr++;
                num=num/2;
            }
            else{
                ctr++;
                num--;
            }
        }
        return ctr;
    }
};
