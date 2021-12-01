#include<iostream>
#include<algorithm>

using namespace std;

bool compare(string a, string b){

    return a+b<b+a;

}

int main(){

    string str[]={"a","ab","aba"};

    int n = 3;

    sort(str,str+n,compare);

    for(auto s: str){
        cout<<s;
    }
}
