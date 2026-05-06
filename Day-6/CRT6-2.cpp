#include<iostream>
using namespace std;

class Student{
    private:
    int reg=101;


    public:
    string name;
    int age;
    //int registration_no;
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Registration No: "<<reg<<endl;
    }
};
int main(){
    cout<<"Enter name, age and registration no of student 1"<<endl;
    Student s1;
   // s1.name="John";
    //s1.age=20;
   // cin>>s1.reg;
    cin>>s1.name>>s1.age;
    cout<<"Enter name, age and registration no of student 2"<<endl;
    Student s2;
    cin>>s2.name>>s2.age;
    s1.display();
    s2.display();
    return 0;
}