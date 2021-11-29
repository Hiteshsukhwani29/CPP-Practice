#include<iostream>
#include<vector>
using namespace std;

int Partition(vector<int> &arr,int Start, int End){

    int pivot = arr[End];
    int i = Start - 1;

    for(int j=Start;j<End;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[End]);
    return i+1;

}

int quickselect(vector<int> &arr,int Start, int End, int s){

    int p = Partition(arr, Start, End);

    if(p==s){
        return arr[p];
    }

    else if(s<p){
        return quickselect(arr, Start, p-1, s);
    }

    else{
        return quickselect(arr, p+1, End, s);
    }


}

int main(){

    vector<int> arr = {10,5,2,0,7,6,4};
    int s=4;

    cout<<quickselect(arr, 0, arr.size()-1, s);

}
