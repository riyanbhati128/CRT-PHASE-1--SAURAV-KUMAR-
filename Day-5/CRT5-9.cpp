//Write a function that takes number of coffee return total coffee if one shot = 30ml 
#include <iostream>
using namespace std;

void totalcoffee(int n){
    int total = n*30;
    cout << "Total coffee is :" << total << " ml" << endl;
}

int main() {
    int n;
    cout << "Enter number of coffee shots: ";
    cin >> n;
    totalcoffee(n);
    return 0;
}