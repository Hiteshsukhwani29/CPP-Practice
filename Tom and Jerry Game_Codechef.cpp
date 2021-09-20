
/*

As usual, Tom and Jerry are fighting. Tom has strength TS and Jerry has strength JS. You are given TS and your task is to find the number of possible values of JS such that Jerry wins the following game.

The game consists of one or more turns. In each turn:

If both TS and JS are even, their values get divided by 2 and the game proceeds with the next turn.
If both TS and JS are odd, a tie is declared and the game ends.
If TS is even and JS is odd, Tom wins the game.


*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long s;
	    cin>>s;
	    while(s%2==0)
	    s=s/2;
	   
	   cout<<s/2<<endl;
	}
	return 0;
}
