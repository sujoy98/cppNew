#include <iostream>
using namespace std;
template <class T>
T maximum(T x, T y){
    return x>y?x:y;
}

int main() {
    cout <<  maximum(5,6) << endl;
    cout << maximum(2.3f,56.5f) << endl;
    return 0;
}