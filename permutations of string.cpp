#include<iostream>
#include<vector>
using namespace std;

vector<string> v;

void findpermutations(string s, int i){
   if(s[i]=='\0'){
      string str(s);
      v.push_back(str);
      return;
   }
   for(int j=i; s[j]!='\0'; j++){
        swap(s[i],s[j]);
        findpermutations(s,i+1);
   }

}

int main(){
    string s = "abc";
    findpermutations(s,0);
    for(auto x : v){
        cout<<x<<endl;
    }
}
