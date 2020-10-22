#include <iostream>
using namespace std;
int main() {
    int a,b,sum=0,product=1;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    sum = a+b;
    product = a*b;
    cout << "Addition of " << a << " and " << b << " is " << sum << endl;
    cout << "Product of " << a << " and " << b << " is " << product;
    return 0;
}
