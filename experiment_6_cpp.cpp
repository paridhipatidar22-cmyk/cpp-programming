#include <iostream>
using namespace std;

class Employee {
    int id;
    float salary;

public:
    Employee() {
        id = 0;
        salary = 0;
    }

    Employee(int i, float s) {
        id = i;
        salary = s;
    }

    void display() {
        float bonus = salary * 0.10;

        cout << "Employee ID: " << id << endl;
        cout << "Basic Salary: " << salary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << salary + bonus << endl;
    }
};

int main() {
    Employee e1;
    Employee e2(101, 25000);

    cout << "Default Constructor:\n";
    e1.display();

    cout << "\nParameterized Constructor:\n";
    e2.display();

    return 0;
}