#include<iostream>

using namespace std;

void generatebrackets(string pattern, int n, int o, int c, int k){

    if(k==2*n){
        cout<<pattern<<endl;
        return;
    }
    if(o<n){
        generatebrackets(pattern+'(', n, o+1, c, k+1);
    }
    if(c<o){
        generatebrackets(pattern+')', n, o, c+1, k+1);
    }

}

int main(){

    int n;
    cin>>n;
    string pattern;
    generatebrackets(pattern,n,0,0,0);
}
