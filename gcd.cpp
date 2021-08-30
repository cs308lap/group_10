#include <iostream>
using namespace std;

int gcd(int n1,int n2) {

  int hcf;
  // swapping variables n1 and n2 if n2 is greater than n1.
  if ( n2 > n1) {

    int temp = n2;
    n2 = n1;
    n1 = temp;
  }

  for (int i = 1; i <=  n2; ++i) {
    if (n1 % i == 0 && n2 % i ==0) {
      hcf = i;
    }
  }



  return hcf;
}
