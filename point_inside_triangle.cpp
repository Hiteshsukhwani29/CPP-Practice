#include <iostream>
#include <math.h>

using namespace std;

float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
   return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}

int main(int argc, const char * argv[]) {
    int x1=0,y1=0,x2=20,y2=0,x3=10,y3=30,x=10,y=15;
    float A = area (x1, y1, x2, y2, x3, y3);
    float A1 = area (x, y, x2, y2, x3, y3);
    float A2 = area (x1, y1, x, y, x3, y3);
    float A3 = area (x1, y1, x2, y2, x, y);
    if(A == A1 + A2 + A3){
        cout<<"inside";
    }
    else{
        cout<<"not inside";
    }
}
