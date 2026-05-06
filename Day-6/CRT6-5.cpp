//user input for function parameters construtor
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollno;

    Student(string n, int r) {
        name = n;
        rollno = r;
    }

    void show() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
    }
};

int main() {
    string name;
    int rollno;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll no: ";
    cin >> rollno;

    Student s1(name, rollno);
    s1.show();

    return 0;
}