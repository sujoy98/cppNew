#include <iostream>
using namespace std;
int main() {
    int age = 23;
    cout << *&age << endl;
    int *page = &age;
    cout << &*page;
    return 0;
}