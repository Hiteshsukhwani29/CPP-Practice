#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int d,m,y1,y2;
    int month[]={1,4,4,0,2,5,0,3,6,1,4,6};
    string days[]={"sat","sun","mon","tue","wed","thu","fri"};
    cin>>d>>m>>y1>>y2;
    while(y1>18){
        y1=y1-4;
    }
    int years[]={0,6,4,2};
    int ans=d+month[m-1]+years[y1-15]+y2+(y2/4);
    ans=ans%7;
    if(m<=2&&y2%4==0){
        ans--;
    }
    cout<<days[ans];
    return 0;
}
