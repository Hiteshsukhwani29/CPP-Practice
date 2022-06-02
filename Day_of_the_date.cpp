#include <iostream>
#include <math.h>
using namespace std;

string findDay(int d, int m, int y){
    string w[7] = {"Saturday","Sunday","Monday","Tuesday", "Wednesday","Thursday","Friday"};
    int m1;
    if(m>2){
        m1=m;
    }
    else{
        m1=m+12;
        y--;
    }
    int a=y%100;
    int b =y/100;
    int i=(d+floor((13*(m1+1))/5)+a+floor(a/4)+floor(b/4)+(5*b));
    i=i%7;
    return w[i];
}

int main(int argc, const char * argv[]) {
    int d,m,y;
    cin>>d>>m>>y;
    cout<<findDay(d,m,y);
    return 0;
}
