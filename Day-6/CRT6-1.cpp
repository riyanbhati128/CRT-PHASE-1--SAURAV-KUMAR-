#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollno;
   // int age;
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollno<<endl;
       // cout<<"Age: "<<age<<endl;
    }
};

int main()
{
    cout<<"Enter name and rollno of student"<<endl;
    Student s1;
    cin>>s1.name>>s1.rollno;
    //s1.name="John";
    //s1.rollno=101;
    s1.display();

    return 0;
}