#include <iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> a = {5,2,4,3};
    vector<int> b = {10,5,7,9};
    int truckSize = 10;
    
    for(int i=0;i<b.size();i++){
        for(int j=i;j<b.size();j++){
            if(b[i]<b[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                int temp1=b[i];
                b[i]=b[j];
                b[j]=temp1;
            }
        }
    }
    
    int ans=0;
    
    for(int i=0;i<a.size();i++){
        int temp=min(truckSize,a[i]);
        ans+=temp*b[i];
        truckSize-=temp;
    }
    
    cout<<ans;
    
    return 0;
}
