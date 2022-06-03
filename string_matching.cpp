#include <iostream>
#include<string.h>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string str = "hitshhiteshhheesshiteshsshhii";
    string p = "hitesh";
    
    for(int i=0;i<=str.length()-p.length();i++){
        int j;
        for(j=0;j<p.length();j++){
            if(str[i+j]!=p[j])
                break;
        }
        if(j==p.length()){
            cout<<"Index: "<<i;
        }
    }
    
    return 0;
}
