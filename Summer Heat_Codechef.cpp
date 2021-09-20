
/*

Chefland has 2 different types of coconut, type A and type B. Type A contains only xa milliliters of coconut water and type B contains only xb grams of coconut pulp. 
Chef's nutritionist has advised him to consume Xa milliliters of coconut water and Xb grams of coconut pulp every week in the summer. 
Find the total number of coconuts (type A + type B) that Chef should buy each week to keep himself active in the hot weather.

*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a1,b1,a2,b2,c,d;
	    cin>>a1>>b1>>a2>>b2;
	    c=a2/a1;
	    d=b2/b1;
	    cout<<c+d<<endl;
	    
	}
	return 0;
}
