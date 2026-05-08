#include<iostream>
using namespace std;

class car{
    private: 
    int speed;
    public:
    car(){
        speed = 120;
    }

    void showSpeed() const
    {
        cout<<"Speed: "<<speed<<endl;
    }
};

int main(){
    car c;
    c.showSpeed();
    return 0;
}
