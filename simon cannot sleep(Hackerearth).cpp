#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	string h = s.substr(0, 2);
	string m = s.substr(3, 2);
	int h1 = stoi(h);
	int m1 = stoi(m);
	int t;
	t = (h1*60) + m1;
	double x = (t*11)/720 + 1;
	cout<<x<<endl;
	return 0;
}
