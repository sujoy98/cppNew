/*
Armstrong Number :
153 --> 1-cube + 5-cube + 3-cube = 153
*/
#include <iostream>
using namespace std;
int main() {
    int n,r,sum=0,copy;
    cout << "Enter a number: ";
    cin >> n;
    copy=n;
    while(n>0){
        // grabbing the last digit
        r = n%10;
        // removing the last digits until zero
        n = n/10;
        sum = sum + (r*r*r);
    }
    if(sum == copy) cout << "Armstrong Number\n";
    else cout << "Not a Armstrong Number\n";
    return 0;
}