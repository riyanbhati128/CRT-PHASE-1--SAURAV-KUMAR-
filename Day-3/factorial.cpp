#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    int fact = 1;

    cout << "Enter number: ";
    cin >> n;

    while(i <= n) {
        fact = fact * i;
        i++;
    }

    cout << "Factorial is " << fact;

    return 0;
}