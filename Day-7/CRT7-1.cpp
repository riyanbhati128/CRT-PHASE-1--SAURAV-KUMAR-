//inheritance
#include<iostream>
#include <string>
using namespace std;
class Player{
private:
    string name;
    int age;

public:
    void setName(string n, int a){
        name = n;
        age = a;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
};


class Cricketer : public Player{
private:
    int runs;

public:
    void setRuns(int r){
        runs = r;
    }
    int getRuns(){
        return runs;
    }
};

int main(){
    Cricketer c1;
    //cout<<"Enter name:  ";
    //cin>>c1.name>>endl;
    //cout<<"Enter runs:  ";
    //cin>>c1.runs>>endl;

    c1.setName("Virat Kohli", 35);
    c1.setRuns(12000);
    cout << "Name: " << c1.getName() << endl;
    cout << "Runs: " << c1.getRuns() << endl;
    return 0;
}
