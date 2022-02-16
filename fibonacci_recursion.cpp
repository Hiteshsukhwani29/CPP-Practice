#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n==1 or n==0){
        return n;
    }
    return fibonacci(n)+fibonacci(n-1);
        
}
l̥
int main() {
    int n;
    cin>>n;
    cout<<fibonacci(n);
}
