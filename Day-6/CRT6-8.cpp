//copy constructor
#include<iostream>  
using namespace std;
#include <iostream>
#include <string>
using namespace std;

class Cricketers{
public:
    Cricketers(const string &name, int runs){
        this->name = name;
        this->runs = runs;
    }

    Cricketers(const Cricketers &c){
        this->name = c.name;
        this->runs = c.runs;
    }

    void show(){
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
    }

private:
    string name;
    int runs;
};

int main(){
    Cricketers c1("Virat Kohli", 12000);
    c1.show();
    Cricketers c2(c1);
    c2.show();
    return 0;
}