//multiple inheritance
#include<iostream>
using namespace std;
class Player{
    public:
        int age;
        void setage(int a){
            age = a;
        }
};
class Cricketer{
    public:
        string name;
        void setname(string n){
            name = "virat kohli";
        }  
};
class Batsman : public Player, public Cricketer{
    public:
        int runs;
        void setruns(int r){
            runs = r;
        }
};

int main(){
    Batsman player;
    cout<<"Enter the name: ";
    cin>>player.name;
    cout<<"Enter the age: ";
    cin>>player.age;
    cout<<"Enter the runs: ";
    cin>>player.runs;
    
    
    //player.setage(30);
    //player.setname("virat kohli");
    //player.setruns(100);
    cout<<"Name: "<<player.name<<endl; 
    cout<<"Age: "<<player.age<<endl;
    cout<<"Runs: "<<player.runs<<endl;
    return 0;
}