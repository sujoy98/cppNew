#include <iostream>
using namespace std;
int main() {
    int m,n;
    cout << "Enter two numbers: ";
    cin >> m >> n;
    while(m!=n){
        if(m > n){
            m = m-n;
        }else{
            n = n-m;
        }
    }
    cout << m << " and " << n << endl;
    return 0;
}