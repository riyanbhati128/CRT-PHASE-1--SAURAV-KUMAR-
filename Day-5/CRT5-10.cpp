//write a function with default argument calling it with or without parameters
#include <iostream>
using namespace std;
int parameter(int n) {
    
    cout << "The value of n is: " << n << endl;
    return n;
}
int main(){
    int n;
    cout<< "enter the value of parameter"<<endl;
    cin>>n;
    parameter(n);
    return 0;
}