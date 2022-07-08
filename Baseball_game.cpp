class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        int a,b;
        
        for(int i=0;i<ops.size();i++)
        {
            switch(ops[i][0]){
                case 'C': s.pop();break;
                case 'D': s.push(s.top()*2);break;
                case '+': a = s.top();s.pop();b = s.top();s.push(a);s.push(a + b);break;
                default: s.push(stoi(ops[i]));break;
            }
        }
        int ctr=0;
        while(s.size() != 0)
        {
            ctr += s.top();
            s.pop();
        }
        return ctr;
    }
};
