#include<iostream>
using namespace std;

int main(){
char str[1000];
int x=0,y=0;
cin.getline(str,1000);
for(int i=0;str[i]!='\0';i++){
    switch(str[i]){
    case 'N': y++;break;
    case 'S': y--;break;
    case 'E': x++;break;
    case 'W': x--;break;
    }
}

if(x>=0&&y>=0){
    while(x--)
        cout<<"E";
    while(y--)
        cout<<"N";
}
else if(x>=0&&y<0){
    while(x--)
        cout<<"E";
    while(y++)
        cout<<"S";
}
else if(x<0&&y<0){
    while(x++)
        cout<<"W";
    while(y++)
        cout<<"S";
}
else if(x<0&&y>=0){
    while(x++)
        cout<<"W";
    while(y--)
        cout<<"N";
}


}
