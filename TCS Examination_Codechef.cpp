#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int a1 , b1 , c1 , a2 , b2 , c2;
        cin >> a1 >> b1 >> c1 >> a2 >>b2 >> c2;
        int total1 = a1 + b1 + c1;
        int total2 = a2 + b2 + c2;
        if(total1 > total2) cout << "Dragon" << endl;
        else if(total1 < total2) cout << "Sloth" << endl;
        else {
            if(a1 > a2) cout << "Dragon" << endl;
            else if(a1 < a2) cout << "Sloth" << endl;
            else {
                if(b1 > b2) cout << "Dragon" << endl;
                else if(b1 < b2) cout << "Sloth"<< endl;
                else {
                    if(c1 > c2) cout << "Dragon" << endl;
                    else if(c1 < c2) cout << "Sloth" << endl;
                    else cout << "Tie" << endl;
                }
            }
        }
    }
}
