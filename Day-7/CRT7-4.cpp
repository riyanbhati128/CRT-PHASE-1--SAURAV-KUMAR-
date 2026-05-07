//heirarchical inheritance
#include<iostream>
using namespace std;
class Player{
    public:
        string name;
        int age;
        void setName(string n)
        {
            name = n;
        }
};
class Cricketer : public Player{
    public:
        int runs;
        void setRuns(int r){
            runs = r;
        }
};
class Footballer : public Player{
    public:
        int goals;
        void setGoals(int g){
            goals = g;
        }
};
int main(){
    Cricketer c1;
    Footballer f1;
    cout<<"Enter name:  ";
    cin>>c1.name;
    cout<<"Enter runs:  ";
    cin>>c1.runs;
    cout<<"Enter name:  ";
    cin>>f1.name;
    cout<<"Enter goals:  ";
    cin>>f1.goals;
    //c1.setName("Virat Kohli");
    //c1.setRuns(12000);

    //f1.setName("Lionel Messi");
    //f1.setGoals(700);

    cout<<"Cricketer Name: "<<c1.name<<endl;
    cout<<"Cricketer Runs: "<<c1.runs<<endl;

    cout<<"Footballer Name: "<<f1.name<<endl;
    cout<<"Footballer Goals: "<<f1.goals<<endl;

    return 0;
}