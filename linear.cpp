#include <iostream>
using namespace std;
int main() {
    int ar[5],key;
    cout << "Enter five numbers: ";
    for(int i=0;i<5;i++){
        cin >> ar[i];
    }
    cout << "Enter a number to search: ";
    cin >> key;
    for(int j=0;j<5;j++){
        if(key == ar[j]){
            cout << "Found at index: " << j << endl;
            return 0;
        }
    }
    cout << "Not found." << endl;
    return 0;
}