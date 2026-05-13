#include<iostream>
using namespace std;

int sumofDigits(int x)
{
    if (x == 0)
    return 0;
    return (x % 10) + sumofDigits(x / 10);
}

int main()
{
    int n;
    cout<<"Enter a number:  "<<endl;
    cin>>n;
    cout<<"Sum of digits: "<<n<<" is: "<<sumofDigits(n)<<endl;
    return 0;
}