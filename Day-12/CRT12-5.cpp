//factorial using recursion
#include<iostream>
using namespace std;

int Factorial(int n){
    if(n == 0){
        return 1;
    }
    return n * Factorial(n - 1);
}
int main(){
    int n;
    cout<<"Enter a number to find its factorial "<<endl;
    cin>>n;
    cout<<"Factorial is: "<<Factorial(n)<<endl;
    return 0;
}