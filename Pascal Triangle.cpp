#include <iostream>
using namespace std;
    
//Function to calculate factorial of a number
int getFactorial(int N){
    if(N < 0){
     // Invalid input
        return -1;
    }
     
    int nFactorial = 1, i;
    //  N! = N*(N-1)*(N-2)*(N-3)*.....*3*2*1
    for(i = 1; i <= N; i++){
        nFactorial = nFactorial * i;
    }   
    return nFactorial;
}
    
int main() { 
    int row, rows, i, value;
    
    cout << "Enter Number of Rows of Pascal Triangle\n"; 
    cin >> rows; 
    
    for(row = 0; row < rows; row++) { 
        // Print Spaces for every row 
        for(i = row; i <= rows; i++) 
            cout << "  "; 
    
        for(i = 0; i <= row; i++) { 
            value = getFactorial(row)/(getFactorial(i)*getFactorial(row-i)); 
            cout << "  " << value; 
        } 
        cout << endl; 
    } 
    
    return 0; 
}
