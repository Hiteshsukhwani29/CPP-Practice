
/*

Chef wrote some text on a piece of paper and now he wants to know how many holes are in the text. 
What is a hole? If you think of the paper as the plane and a letter as a curve on the plane, then each letter divides the plane into regions. 
For example letters "A", "D", "O", "P", "R" divide the plane into two regions so we say these letters each have one hole. 
Similarly, letter "B" has two holes and letters such as "C", "E", "F", "K" have no holes. 
We say that the number of holes in the text is equal to the total number of holes in the letters of the text. 
Help Chef to determine how many holes are in the text.

*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string a;
	    cin>>a;
	    int ctr=0;
	    for(int i=0;i<a.length();i++){
	        switch(a[i]){
	            case 'B' : ctr+=2;break;
	            case 'D' : ctr+=1;break;
	            case 'O' : ctr+=1;break;
	            case 'P' : ctr+=1;break;
	            case 'Q' : ctr+=1;break;
	            case 'A' : ctr+=1;break;
	            case 'R' : ctr+=1;break;
	        }
	    }
	    cout<<ctr<<endl;
	}
	return 0;
}
