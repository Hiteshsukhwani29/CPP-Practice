#include<iostream>
#include<vector>

using namespace std;

void GenerateSubsequence(string str,string o,vector<string>& v){
    if(str.size()==0){
        v.push_back(o);
        return;
    }
    char ch=str[0];
    string reduced_string=str.substr(1);
    GenerateSubsequence(reduced_string,o+ch,v);
    GenerateSubsequence(reduced_string,o,v);
 
    }
 
int main(){
    string str="abc";
    vector<string> v;
    string o="";
    GenerateSubsequence(str,o,v);
    for(string s:v){
        cout<<s<<endl;
    }
}
