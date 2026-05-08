#include<iostream>
using namespace std;
class Employee{
    public:
    static int reg_no;
    void show(){
        cout<<"Reg No: "<<reg_no<<endl;
        //cout<<"Balance: "<<balance<<endl;
    }
}; 

int Employee::reg_no = 100;
    
int main(){
    Employee E1;
    Employee E2;
    Employee E3;
    Employee E4;
    E1.show();
    
    return 0;    
}