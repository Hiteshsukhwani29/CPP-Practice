class Solution{
public:
    char profession(int level, int pos){
        if(pos==1) 
        return 'e';
        else{
            char p=profession(level-1,(pos+1)/2);
            char c=p;
            if(pos%2==0) c^='e'^'d';
            return c;
        }
    }
};
