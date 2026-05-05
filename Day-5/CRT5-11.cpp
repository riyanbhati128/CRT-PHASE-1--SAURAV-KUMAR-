//Write a function that apply 10% discount using refrences print the updated bill 
#include <iostream>
using namespace std;
void discount(float &bill){
    bill = bill - (bill*0.1);
}
int main(){
    float total_bill;
    cout<<"Enter the bill amount"<<endl;
    cin>>total_bill;
    discount(total_bill);
    cout<<"The updated bill after 10% discount is: "<<total_bill<<endl;
}   