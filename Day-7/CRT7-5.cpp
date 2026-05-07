//virtual function 
#include<iostream>
using namespace std;
class Player{
    public:
    virtual void show()
    {
        //cout<<"PLayer class show function"<<endl;
    }

    private:
    string name;
    void setName(string n){
        name = n;
    }
};

class Cricketers : public Player{
    public:
    int a;
    void show()
    {
        cout<<"Cricketers class show function"<<endl;
    }
};

int main(){
    Player *p;
    Cricketers c1;
    p = &c1;
    p->show();
    cout<<"Value of a: "<<c1.a<<endl;
    cin>>c1.a;
    return 0;
}