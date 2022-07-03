#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int h;
    int m;
    cin>>h>>m;
    float ans=(h*30+m*0.5)-(m*6);
    cout<<ans;
    return 0;
}
