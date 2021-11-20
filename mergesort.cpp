#include<iostream>
#include<vector>
using namespace std;

void Merge(vector<int> &a, int Start, int End){

    int i = Start, Mid = (Start+End)/2;
    int j = Mid+1;

    vector<int> temp;
    while(i<=Mid and j<=End){
        if(a[i]<a[j]){
            temp.push_back(a[i]);
            i++;
        }
        else{
            temp.push_back(a[j]);
            j++;
        }
    }

    while(i<=Mid){
        temp.push_back(a[i++]);
    }
    while(j<=End){
        temp.push_back(a[j++]);
    }

    int x=0;
    for(int i=Start;i<=End;i++){
        a[i] = temp[x++];
    }

}

void mergesort(vector<int> &a, int Start, int End){

    if(Start>=End){
        return;
    }

    int Mid = (Start+End)/2;
    mergesort(a,Start,Mid);
    mergesort(a,Mid+1,End);
    return Merge(a,Start,End);

}

int main(){

    vector<int> a = {1,4,2,3,5,8,6,9};
    int Start=0;
    int End=a.size()-1;
    mergesort(a,Start,End);
    for(int i: a){
        cout<<i<<",";
    }


}
