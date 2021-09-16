/* Chef is given two integers N,S.

Consider an array A of size N such that A[i]=i for every 1≤i≤N.

You are required to find any position x(1≤x≤N) such that :

(A[1]+A[2]+...A[x−1])+(A[x+1]+A[x+2]+...A[N])=S
If there are multiple such positions x, print any such position. If there is no such position, print −1
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int s,n;
	    cin>>n;
	    cin>>s;
	    unsigned long long a = n*(n+1)/2;
	    a = a-s;
	    
	    if(a>=1 and a<=n){
	        cout<<a<<"\n";
	    }
	    else{
	        cout<<"-1\n";
	    }
	    
	}
	return 0;
}
