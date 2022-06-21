bool isValidParenthesis(string expression)
{
    stack<char> k;
        for(int i=0;i<expression.length();i++){
            switch(expression[i]){
                case '(': k.push(')');break;
                case '{': k.push('}');break;
                case '[': k.push(']');break;
                default: if(k.size()==0||expression[i]!=k.top()){
                    return false;
                }
                else{
                    k.pop();
                }
            }
        }
        if(k.size()==0)
            return true;
        else 
            return false;
}
