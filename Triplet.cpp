#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> triplet(vector<int> arr, int s){

    sort(arr.begin(),arr.end());
    vector<vector<int>> result;

    int n = arr.size();

    for(int i=0;i<=n-3;i++){
    int j = i+1;
    int k = n-1;

    while(j<k){
        int c = arr[i];
        c += arr[j];
        c += arr[k];

        if(c==s){
            result.push_back({arr[i],arr[j],arr[k]});
            j++;
            k--;
        }
        else if(c > s){
            k--;
        }
        else{
            j++;
        }
    }

    }
    return result;

}


int main(){

	vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
	int S = 18;

	auto result = triplet(arr,S);

	for(auto v : result){
		for(auto no : v){
			cout<<no<<",";
		}
		cout<<endl;
	}


	return 0;
}
