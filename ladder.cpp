#include <iostream>
using namespace std;

int countways(int n){
    
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    return countways(n-1)+countways(n-2)+countways(n-3);
}

int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    cout<<countways(n);
    return 0;
}
