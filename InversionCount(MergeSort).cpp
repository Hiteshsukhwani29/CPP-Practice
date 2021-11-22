#include<iostream>
#include<vector>
using namespace std;

int Merge(vector<int> &a, int Start, int End){

    int i = Start, Mid = (Start+End)/2;
    int j = Mid+1;

    int ctr=0;

    vector<int> temp;
    while(i<=Mid and j<=End){
        if(a[i]<a[j]){
            temp.push_back(a[i]);
            i++;
        }
        else{
            ctr+= Mid-i+1;
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
    return ctr;

}

int inversioncount(vector<int> &a, int Start, int End){

    if(Start>=End){
        return 0;
    }

    int Mid = (Start+End)/2;
    int c1 = inversioncount(a,Start,Mid);
    int c2 = inversioncount(a,Mid+1,End);
    int c3 = Merge(a,Start,End);

    return c1+c2+c3;

}

int main(){

    vector<int> a = {0,5,2,3,1};
    int Start=0;
    int End=a.size()-1;
    cout<<inversioncount(a,Start,End);

    return 0;

}
