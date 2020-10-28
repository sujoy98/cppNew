#include <iostream>
using namespace std;
int main() {
    int p,t,r,si;
    cout << "Enter Principle: \n";
    cin >>p;
    cout << "Enter time: \n";
    cin >> t;
    cout <<"Enter rate: \n";
    cin >>r;
    si=(p+t+r)/100;
    cout << "Simple interest is "<< si << endl;
    return 0;
}
