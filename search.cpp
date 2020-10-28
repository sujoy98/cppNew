#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int ar[n];
    cout << "Enter all the number elements : ";
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }
    int key,l=0,h=n-1,mid;
    cout << "Enter a number element to search: ";
    cin >> key;
    
    // binary search
   while(l<=h){
        mid = (l+h)/2;
        if(key == ar[mid]){
            cout << "Number found at " << mid+1 << "th"<<" position.";
            return 0;
        }else if(key < ar[mid]){
            h = mid-1;
        }else{
            l = mid+1;
        }
    }
    // linear search
    // for(int j=0;j<ar[n];j++){
    //     if(key == ar[j]){
    //         cout << "Number found at " << j+1 << "th"<<" position.";
    //         return 0;
    //     }
    // }
    cout << "Number not found.";
    return 0;
}
