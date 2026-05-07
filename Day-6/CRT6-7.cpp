//write a cpp program to create a student mangagement system where we store and display a student details 
//1>name 2>rollno 3>reg 4>email id 5>phone no 6>marks using parameterized constructor and display the details using a member function. 
#include<iostream>
using namespace std;
class Student{
  public:
  string name;
  int rollno;
  char reg;
  char email;
  long long phone;
  int marks;
    Student(string n, int r, char re, char e, long long p, int m){
        name = n;
        rollno = r;
        reg = re;
        email = e;
        phone = p;
        marks = m;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Reg: " << reg << endl;
        cout << "Email: " << email << endl;
        cout << "Phone No: " << phone << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main(){
    Student s1("John Doe", 101, '2323', 'john.doe@example.com', 1234567890, 85);
    s1.display();
    return 0;
}