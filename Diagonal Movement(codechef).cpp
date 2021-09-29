/*

Given the coordinates (x,y) of a point in 2-D plane. Find if it is possible to reach (x,y) from (0,0). The only possible moves from any coordinate (i,j) are as follows:

Go to the point with coordinates (i+1,j+1).
Go to the point with coordinates (i+1,j−1)
Go to the point with coordinates (i−1,j+1).
Go to the point with coordinates (i−1,j−1).


*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int i,j;
	    cin>>i>>j;
	    if((i+j)%2==0)
	    cout<<"Yes"<<endl;
	    
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
