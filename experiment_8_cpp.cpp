#include <iostream>
using namespace std;

class B;

class A {
    int value;

public:
    static int count;

    A(int v) {
        value = v;
        count++;
    }

    static void showCount() {
        cout << "Total objects: " << count << endl;
    }

    friend void compare(A, B);
};

class B {
    int value;

public:
    B(int v) {
        value = v;
    }

    friend void compare(A, B);
    friend class Display;
};

int A::count = 0;

void compare(A a, B b) {
    if (a.value > b.value)
        cout << "A has greater value\n";
    else if (a.value < b.value)
        cout << "B has greater value\n";
    else
        cout << "Both values are equal\n";
}

class Display {
public:
    void show(B b) {
        cout << "Private value of B: " << b.value << endl;
    }
};

int main() {
    A a1(20), a2(30);
    B b1(25);

    A::showCount();
    compare(a1, b1);

    Display d;
    d.show(b1);

    return 0;
}
