#include<iostream>
using namespace std;

int main() {

 int t, a, b, p, max=0, x, temp, ctr1=0, ctr2=0;
 cin>>t;

 while(t--) {
  cin>>a>>b;

  ctr1=ctr1+a;
  ctr2=ctr2+b;

  if(ctr1>ctr2) {
   p=ctr1-ctr2;
   temp=1;
  }
  else {
   p=ctr2-ctr1;
   temp=2;
  }
  if(p>max) {
   max=p;
   x=temp;
  }
 }
 cout<<x<<" "<<max;
 return 0;
}
