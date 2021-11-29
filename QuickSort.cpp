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

int quicksort(vector<int> &arr,int Start, int End){

    if(Start>=End){
        return 0;
    }
    int p = Partition(arr, Start, End);

    quicksort(arr, Start, p-1);
    quicksort(arr, p+1, End);

}

int main(){

    vector<int> arr = {10,5,2,0,7,6,4};

    quicksort(arr, 0, arr.size()-1);

    for(int x : arr){
        cout<<x<<",";
    }

}
