#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int b[]={100,500,200,300,600};
    int p[]={212,417,112,426};
    int ans[4]={0,0,0,0};
    for(int i=0;i<4;i++){
        int m=INT_MAX,mindex;
        for(int j=0;j<5;j++){
            if(p[i]<b[j]){
                if(b[j]-p[i]<m){
                    m=b[j]-p[i];
                    mindex=j;
                }
            }
        }
        b[mindex]=b[mindex]-p[i];
            ans[i]=mindex;
        }
    for(int k=0;k<4;k++){
        cout<<ans[k]+1<<endl;
    }
    return 0;
}
