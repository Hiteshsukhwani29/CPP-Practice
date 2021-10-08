#include<iostream>
#include<vector>
#include<cstring>
#include<sstream>

using namespace std;

int main(){

    string str,t;
    vector<string> n;

    getline(cin,str);

    stringstream s(str);

    while(getline(s,t,' ')){
        n.push_back(t);
    }

    for(auto t:n){
        cout<<t<<",";
    }


}
