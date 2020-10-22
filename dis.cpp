#include <iostream>
using namespace std;
int main() {
    string name;
    cout << "Enter your name: ";
    
    // this will read the first word
    // cin >> name;
    
    // to read a whole line
    getline(cin,name); 

    cout << "Your name is" << " " << name << endl;
    return 0;
}