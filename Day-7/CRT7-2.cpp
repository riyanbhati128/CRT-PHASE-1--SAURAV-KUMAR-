//multilevel innheritance
#include<iostream>
using namespace std;
class Cricketer{
    public:
        string name;
        void setname(string n){
            name = "virat kohli";
        }  
};

class Batsman : public Cricketer{
    public:
        int runs;
        void setruns(int r){
            runs = r;
        }
};

class IndianBatsman : public Batsman{
    public:
        string state;
        void setstate(string s){
            state = s;
        }
};


int main(){
    IndianBatsman player;
    int r;
    string s;
    player.setname("virat kohli");

    cout<<"Enter the runs: "<<endl;
    cin>> r;
    player.setruns(r);

    cout<<"Enter the state: "<<endl;
    cin>> s;
    player.setstate(s);

    cout<<"Name: "<<player.name<<endl;
    cout<<"Runs: "<<player.runs<<endl;
    cout<<"State: "<<player.state<<endl;
    return 0;
}