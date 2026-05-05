#include<iostream>
using namespace std;
void printmsg()
{
    cout << "Pointer Demonstration Program" << endl;
    cout << "This program shows how to use pointers in C++" << endl;
}

   int main()
   {
    printmsg();
    int a = 5;  
    int * ptr=&a;
        cout<<*ptr<<endl;
        return 0;

}