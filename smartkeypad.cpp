#include<iostream>

using namespace std;

string keypad[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void generatepairs(string i, string o, int n){

    if(i[n]=='\0'){
        cout<<o<<endl;
        return;
    }

    int cd = i[n] - '0';

    for(int j=0;j<keypad[cd].size();j++){
        generatepairs(i, o+keypad[cd][j], n+1);
    }

}

int main(){

    string i,o;
    cin>>i;
    generatepairs(i,o,0);

}
