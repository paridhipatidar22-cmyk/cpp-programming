#include <iostream>
using namespace std;

class Rectangle {
    float length, breadth;

public:
    void getData() {
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;
    }

    void display() {
        cout << "Area = " << length * breadth << endl;
        cout << "Perimeter = " << 2 * (length + breadth) << endl;
    }
};

int main() {
    Rectangle r;
    r.getData();
    r.display();

    return 0;
}