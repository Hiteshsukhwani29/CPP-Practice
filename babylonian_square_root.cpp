#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int n;
    
    cout<<"Enter number: ";
    cin>>n;
    
    float x=n;
    float y=1;
    float e=0.000001;
    while(x-y>e){
        x=(x+y)/2;
        y=n/x;
    }
    cout<<"Square root of "<<n<< " is "<<x<<endl;

}
