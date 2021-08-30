#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout<< endl;
    cout<<"The factorial of 5 is "<< factorial(5)<< endl;
    int n1, n2;    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    cout<<gcd(n1,n2);
    return 0;
}
