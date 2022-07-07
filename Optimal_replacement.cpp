#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int p[]={1,3,0,3,5,6,3};
    int f=3;
    int ans[3]={-1,-1,-1};
    int x=0,ctr=0,counter=0;
    int opt[3]={INT_MIN,INT_MIN,INT_MIN};
    int m=10000,mindex=INT_MAX;
    for(int k=0;k<7;k++){
        int flag=0;
        for(int i=0;i<f;i++){
            if(p[k]==ans[i]){
                flag=1;
                for(int q=0;q<3;q++){
                    counter=0;
                    for(int r=k;r<7;r++){
                        if(ans[q]!=p[r])
                            counter++;
                    }
                    if(counter<m){
                        m=counter;
                        mindex=q;
                    }
                }
            }
        }
        if(x==3){
            x=0;
        }
        if(flag==0){
            cout<<endl<<p[k]<<" -- ";
            if(x==mindex){
                x++;
                if(x==3){
                    x=0;
                }
            }
            ans[x]=p[k];
            x++;
            ctr++;
        }
        if(flag==1){
            cout<<endl<<p[k]<<" -- ";
        }
        if(flag==1){
            cout<<"No Page Fault";
        }
        if(flag==0){
            for(int i=0;i<f;i++){
                if(ans[i]==-1){
                    cout<<" ";
                }
                else{
                    cout<<ans[i]<<" ";
                }
            }
        }
    }
    cout<<"\nTotal page faults: "<<ctr<<endl;
    return 0;
}
