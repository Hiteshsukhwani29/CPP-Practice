#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int bsize[]={100,200,300,400,500};
    int psize[]={90,200,280,350};
    int k[4];
    for(int i=0;i<4;i++){
        k[i]=-1;
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if(psize[i]<=bsize[j]){
                bsize[j]-=psize[i];
                k[i]=j;
                break;
            }
        }
    }
    int intf=0,ef=0;
    for(int i=0;i<4;i++){
        if(k[i]!=-1){
            cout<<k[i]+1<<endl;
            cout<<intf<<"--";
            intf+=bsize[i];
            }
    }
    for(int i=0;i<5;i++){
            ef+=bsize[i];
    }
    cout<<"Internal Fragmentation:"<<intf;
    cout<<"\nExternal fragmentation:"<<ef-intf;
    return 0;
}
