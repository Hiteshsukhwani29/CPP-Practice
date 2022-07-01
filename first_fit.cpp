#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int bsize[]={100,500,200,300,600};
    int psize[]={212,417,112,426};
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
    for(int i=0;i<4;i++){
        if(k[i]==-1)
            cout<<"Not Allocated"<<endl;
        else
            cout<<k[i]+1<<endl;
    }
    return 0;
}
