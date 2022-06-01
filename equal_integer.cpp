#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while(t--){
        int x=0,y=0,ctr=0;
        cin>>x>>y;
        if(x==y){
            cout<<"0";
            break;
        }
        if(x<y){
            while(x!=y){
                ctr++;
                x++;
            }
        }
        if(x>y){
            while(x!=y){
                y+=2;
                ctr++;
            }
        }
        cout<<ctr<<endl;
    }
    return 0;
}
