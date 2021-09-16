
/*
Chef is currently facing the north direction. Each second he rotates exactly 90 degrees in clockwise direction. Find the direction in which Chef is facing after exactly X seconds.

Note: There are only 4 directions: North, East, South, West (in clockwise order).
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	   int sec;
	    cin>>sec;
	    if(sec%4==0)
	    cout<<"North\n";
	    else if(sec%4==2)
	    cout<<"South\n";
	    else if(sec%4==3)
	    cout<<"West\n";
	    else
	    cout<<"East\n";
	    
	}
	return 0;
}
