#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
        // constructor, will have same as class name
        Book(string ntitle, string nauthor, int npages) {
            title = ntitle;
            author = nauthor;
            pages = npages;
        }
        void goodBook() {
            if(pages >= 1100){
                cout << "Good Book";
            }else{
                cout << "Bad Book";
            }
            return;
        }
};

int main() {
    Book obj1("Harry", "Rowling", 1000);
    Book obj2("Harry New", "Rowling", 1500);
    cout << obj1.title << endl;
    cout << obj2.title << endl;
    obj1.goodBook();
    return 0;
}