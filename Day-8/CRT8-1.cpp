//abstraction
#include <iostream>
using namespace std;
class ATM{
    private:
    int balance;
    public:
    void withdraw(int amount){
        if(amount>balance){
            cout<<"Insufficient balance"<<endl;
        }
        else{
            balance-=amount;
            cout<<"Withdrawn: "<<amount<<endl;
        }
    }
    void Showbalance(){
        cout<<"Balance: "<<balance<<endl;
    }
};

int main(){
    ATM atm;
    cout<<"Enter the amount to withdraw"<<endl;
    int amount;
    cin>>amount;
    atm.Showbalance();
    atm.withdraw(amount);
    return 0;
}   