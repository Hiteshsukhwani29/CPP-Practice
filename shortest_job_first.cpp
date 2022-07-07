#include <iostream>
using namespace std;

void shortestjobfirst(int p[],int btime[]){
    int n=5;
    int wtime[5];
    int k,a=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(btime[j]<btime[i]){
                swap(btime[j],btime[i]);
                swap(p[j],p[i]);
            }
        }
    }
    wtime[0]=0;
    cout<<p[0]<<" -- "<<wtime[0]<<endl;
    for(int i=1;i<n;i++){
        wtime[i]=wtime[i-1]+btime[i-1];
        a+=wtime[i];
        cout<<p[i]<<" -- "<<wtime[i]<<endl;
    }
    cout<<"Average time: "<<a/n<<endl;
}

int main(int argc, const char * argv[]) {
    int p[]={1,2,3,4,5};
    int btime[]={10,30,20,15,50};
    shortestjobfirst(p,btime);
    return 0;
}
