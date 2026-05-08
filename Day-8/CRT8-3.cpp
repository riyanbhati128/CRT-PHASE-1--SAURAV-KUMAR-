#include<iostream>
using namespace std;
class Area{
    private:
    int length;
    int breadth;
    public: 

    void setSides(int l, int b){
        length = l;
        breadth = b;
    }
    friend void showArea(Area b);
};

void showArea(Area b){
    int area = b.length * b.breadth;
    cout<<"Area: "<<area<<endl;
}

int main(){
    Area a;
    cout<<"Enter length and breadth"<<endl;
    int l, b;
    cin>>l>>b;
    a.setSides(l, b);
    showArea(a);
    return 0;
}