#include <iostream>
using namespace std;

void shortestjobfirst(int p[],int btime[]){
    int n=5;
    int wtime[5];
    int k;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(btime[j]<btime[i]){
                swap(btime[j],btime[i]);
                swap(p[j],p[i]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<p[i]<<"--"<<endl;
    }
}

int main(int argc, const char * argv[]) {
    int p[]={1,2,3,4,5};
    int btime[]={10,30,20,15,50};
    shortestjobfirst(p,btime);
    return 0;
}
