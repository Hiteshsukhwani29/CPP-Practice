#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

int LongestBand(vector<int> arr){

    unordered_set <int> s;
    int largest=0;
    for(int i=0;i<arr.size();i++){
    s.insert(arr[i]);
    }

    for(int i=0;i<arr.size();i++){
        int p = i-1;
        if(s.find(p)==s.end()){
            int next = i+1;
            int ctr=1;
            while(s.find(next)!=s.end()){
                ctr++;
                next++;
            }
            if(ctr>largest){
                largest = ctr;
            }
        }
    }

    return largest;
}

int main(){

    vector<int> arr={1,9,3,0,18,5,2,10,7,12,6};

    cout<<LongestBand(arr);


}
