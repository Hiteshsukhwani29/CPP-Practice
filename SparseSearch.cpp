#include<iostream>

using namespace std;

int sparsesearch(string str[], int n, string key){

    int Start=0,End=n-1;

    while(Start<=End){

        int Mid = (Start+End)/2;
        int l=Mid-1;
        int r=Mid+1;

        if(str[Mid]==""){

            while(1){
                if(l<Start and r>End){
                    return -1;
                }
                else if(r<=End and str[r]!=""){
                    Mid=r;
                    break;
                }
                else if(l>=Start and str[l]!=""){
                    Mid=l;
                    break;
                }

                l--;
                r++;

            }

        }
        else if(str[Mid]==key){
            return Mid;
        }
        else if(str[Mid]>key){
            End=Mid-1;
        }
        else{
            Start=Mid+1;
        }

    }

    return -1;
}



int main(){

    string str[] = {"a1","","a2","b1","","b2","","c1"};
    string key;
    int n = 8;

    cin>>key;
    cout<<sparsesearch(str,n,key)<<endl;

}
