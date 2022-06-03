#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    
    vector<int> arr = { 184, 230, 276 };
    int ctr = 0;
    int m = INT_MAX;
    for(int i=1;i<arr.size();i++){
        m = min(m,arr[i]-arr[i-1]);
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]%m==0){
            ctr++;
        }
    }
    
    if(ctr==arr.size()){
        cout<<"HCF: "<<m<<endl;
    }
    else{
        for(int i=m;i>=1;i--) {
            if(m%i==0){
                int ctr1=0;
                for(int j=0;j<arr.size();j++){
                    if(arr[j]%i==0){
                        ctr1++;
                    }
                }
                if(ctr1==arr.size()){
                    cout<<"HCF: "<<i<<endl;
                    break;
                }
            }
        }
    }
    
    return 0;
}
