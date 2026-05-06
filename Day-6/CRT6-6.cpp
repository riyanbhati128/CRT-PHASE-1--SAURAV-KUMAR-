//contructor overloading
#include<iostream>
using namespace std;

class Area{ 
    public:
    int length, width; 
    Area(){
        length = 0;
        width = 0;
    }
    Area(int l, int w){
        length = l;
        width = w;
    }
    void display(){
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << length * width << endl;
    }
};

int main(){
    Area a1;
    a1.display();
    Area a2(5, 10);
    a2.display();
    Area a3(7, 3);
    a3.display();
    return 0;
}