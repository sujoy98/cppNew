#include <iostream>
using namespace std;
int main() {
    int ar[5] = {1,2,3,4,5};
    int l=0,h=4,key,mid;
    cout << "Enter the number to search: ";
    cin >> key;
    while(l <= h){
        mid = (l+h)/2;
        if(key == ar[mid]){
            cout << "Found." << endl;
            return 0;
        }else if(key < ar[mid]){
            h = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    cout << "Not Found." << endl;
    return 0;
}