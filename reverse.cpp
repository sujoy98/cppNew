#include <iostream>
using namespace std;
int main() {
    int n,r,rev=0;
    cout << "Enter a number to reverse: ";
    cin >> n;
    while(n>0){
        // grabbing the last digit
        r = n%10;
        // removing the last digits until zero
        n = n/10;
        // multiplying with 10 for the placevalue
        rev = rev*10+r;
    }
    cout << rev << endl;
    return 0;
}