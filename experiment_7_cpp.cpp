#include <iostream>
using namespace std;

class Book {
    string title;
    float price;

public:
    Book(string t, float p) {
        title = t;
        price = p;
    }

    Book(const Book &b) {
        title = b.title;
        price = b.price;
    }

    void display() {
        cout << "Book Title: " << title << endl;
        cout << "Price: " << price << endl;
    }

    ~Book() {
        cout << "Destructor called for " << title << endl;
    }
};

int main() {
    Book b1("C++ Programming", 450);

    cout << "Original Book:\n";
    b1.display();

    Book b2 = b1;

    cout << "\nCopied Book:\n";
    b2.display();

    return 0;
}