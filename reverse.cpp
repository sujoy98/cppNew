#include <iostream>
using namespace std;
int main() {
    int n,r,rev=0,copy;
    cout << "Enter a number to reverse: ";
    cin >> n;
    copy=n;
    while(n>0){
        // grabbing the last digit
        r = n%10;
        // removing the last digits until zero
        n = n/10;
        // multiplying with 10 for the placevalue
        rev = rev*10+r;
    }
    cout << rev << endl;
    if(copy == rev) cout << "Palindrome Number\n";
    else cout << "Not Palindrome\n";
    return 0;
}