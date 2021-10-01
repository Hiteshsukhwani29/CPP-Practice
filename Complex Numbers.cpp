#include <iostream>
using namespace std;
  
/* Structure to store complex number in the form of x + yi, 
 * realPart = x and imaginaryPart = y;
 */
struct Complex {
   int realPart;
   int imaginaryPart;
};
   
int main() {
   Complex c1, c2, sum;
   
   cout << "Enter value of A and B  where A + iB is first complex number\n";
   cin >> c1.realPart >> c1.imaginaryPart;
     
   cout << "Enter value of A and B  where A + iB is second complex number\n";
   cin >> c2.realPart >> c2.imaginaryPart;
     
   /* (A + Bi) + (C + Di) = (A+C) + (B+D)i */
   sum.realPart = c1.realPart + c2.realPart;
   sum.imaginaryPart = c1.imaginaryPart + c2.imaginaryPart;
      
   if(sum.imaginaryPart >= 0 )
      cout << sum.realPart << " + " << sum.imaginaryPart<<"i";
   else
      cout << sum.realPart << " - " << sum.imaginaryPart<<"i";
     
   return 0;
}
