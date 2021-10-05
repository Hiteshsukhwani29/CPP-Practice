#include <iostream>
#include<cstring>
using namespace std;

void ReplaceSpace(char *str){

    int s = 0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            s+= 1;
        }
    }

    int idx = strlen(str) + 2*s;
    str[idx] = '\0';

    for(int i = strlen(str)-1;i>=0;i--){
        if(str[i]==' '){
            str[idx-1] = '0';
            str[idx-2] = '2';
            str[idx-3] = '%';
            idx = idx - 3;
        }
        else{
            str[idx-1] = str[i];
            idx--;
        }
    }

}


int main() {
    char str[10000];
    cin.getline(str,1000);
    ReplaceSpace(str);
    cout<<str<<endl;

    return 0;
}
