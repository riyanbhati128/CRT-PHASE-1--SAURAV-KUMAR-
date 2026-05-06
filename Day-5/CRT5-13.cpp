//write a function that takes length and width as input and return the area of rectangle as output
#include <iostream>
using namespace std;
void area(int length, int breadth){
    int area = length * breadth;
    cout<<"Area of rectangle is: "<<area;
}
int main(){
    int length, breadth;
    cout<<"Enter length and breadth of rectangle: ";
    cin>>length>>breadth;
    area(length, breadth);
    return 0;
}