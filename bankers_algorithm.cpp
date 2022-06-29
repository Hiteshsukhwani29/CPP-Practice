#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int allocation[5][3]={
        {0,1,0},{2,0,0},{3,0,2},{2,1,1},{0,0,2}
    };
    int maximum[5][3]={
        {7,5,3},{3,2,2},{9,0,2},{2,2,2},{5,3,3}
    };
    
    int available[3]={3,3,2};
    
    int finish[5],ans[5],p=0;
    for(int i=0;i<5;i++){
        finish[i]=0;
    }
    int need[5][3];
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            need[i][j]=maximum[i][j]-allocation[i][j];
        }
    }
    for(int k=0;k<5;k++){
        for(int i=0;i<5;i++){
            if(finish[i]==0){
                int flag=0;
                for(int j=0;j<3;j++){
                    if(need[i][j]>available[j]){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    ans[p++]=i;
                    for(int j=0;j<3;j++){
                        available[j]+=allocation[i][j];
                        finish[i]=1;
                    }
                }
            }
        }
    }
    int flag=1;
    for(int i=0;i<5;i++){
        if(finish[i]==0){
            flag=0;
            cout<<"Unsafe sequence";
            break;
        }
    }
    if(flag==1){
        cout<<"Safe sequence is: "<<endl;
        for(int i=0;i<5;i++){
            cout<<ans[i]<<" ";
        }
    }
    
    return 0;
}
