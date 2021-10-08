#include<iostream>
#include<cstring>

using namespace std;

int main(){

    char str[1000];
    cin.getline(str,1000);

    char *t= strtok(str," ");

    while(t!=NULL){
        cout<<t<<",";
        t= strtok(NULL," ");
    }

}
