#include<bits/stdc++.h>
using namespace std;
int main(){
  string str="((a+b)+(c))";
  stack<char> s;
  for(char i:str){
    if(i!=')'){
      s.push(i);
    }
    else{
      bool flag=false;
      while(!s.empty()&&s.top()!='('){
        char temp=s.top();
        if(temp=='+'||temp=='-'||temp=='*'||temp=='/'){
          flag=true;
        }
        s.pop();
      }
      s.pop();
      if(flag==false){
        cout<<"It has redundant parenthesis";
      }
      else{
        cout<<"It doesn't has redundant parenthesis";
      }
    }
  }
}
