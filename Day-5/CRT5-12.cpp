//swap two numbers using pointers
#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
 int main(){
    int x, y;
    cout<<"Enter the value of x and y"<<endl;
    cin>>x>>y;
    cout<<"The value of x before swapping is: "<<x<<endl;
    cout<<"The value of y before swapping is: "<<y<<endl;
    swap(&x, &y);
    cout<<"The value of x after swapping is: "<<x<<endl;
    cout<<"The value of y after swapping is: "<<y<<endl;
    return 0;
 }