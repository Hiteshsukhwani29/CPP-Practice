#include<iostream>
#include<vector>

using namespace std;

int lowerbound(vector<int> arr,int key){

	int Start = 0;
	int End = arr.size() - 1;
	int ctr = -1;

	while(Start<=End){
		int Mid = (Start+End)/2;

		if(arr[Mid]==key){
			ctr = Mid;
			End = Mid - 1;
		}
		else if(arr[Mid] > key){
			End = Mid - 1;
		}
		else{
			Start = Mid + 1;
		}
	}
	return ctr;

}

int upperbound(vector<int> arr,int key){

	int Start = 0;
	int End = arr.size() - 1;
	int ctr = -1;

	while(Start<=End){
		int Mid = (Start+End)/2;

		if(arr[Mid]==key){
			ctr = Mid;
			Start = Mid + 1;
		}
		else if(arr[Mid] > key){
			End = Mid - 1;
		}
		else{
			Start = Mid + 1;
		}
	}
	return ctr;

}

int main(){

	vector<int> arr = {0,1,1,2,3,3,3,3,3,4,5,5,5,10};
	int n = arr.size();
	int key;
	cin>>key;

	cout<<upperbound(arr,key)-lowerbound(arr,key)+1<<endl;

	return 0;
}
