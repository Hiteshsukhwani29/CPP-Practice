void reverseArray(vector<int> &arr , int m)
{
    int a=m+1;
    int b=arr.size()-1;
    while(a<b){
        swap(arr[a],arr[b]);
        a++;
        b--;
    }
}
