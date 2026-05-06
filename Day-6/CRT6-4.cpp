//function overloading
#include <iostream>
using namespace std;
 
class cricketers
{
public:
    string name;
    int runs;
    double avg;

    cricketers(string n, int r, double avg){
        name = n;
        runs = r;
        this->avg = avg;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
        cout << "Average: " << avg << endl;
    }
};

int main(){
    cricketers c1("Sachin Tendulkar", 18426, 44.83);
    c1.display();
    return 0;
}