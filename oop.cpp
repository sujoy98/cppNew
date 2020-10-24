#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
};

int main() {
    Book obj1;
    obj1.title = "Harry\n";
    obj1.author = "Rowling'n";
    obj1.pages = 1000;
    cout << obj1.title; 
    return 0;
}