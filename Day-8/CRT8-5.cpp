#include<iostream>

using namespace std;

namespace Virat{
    void show(){
        cout<<"He is part of Royal Challengers Bangalore"<<endl;
    }
};
namespace Rohit{
    void show(){
        cout<<"He is part of Mumbai Indians"<<endl;
    }
};

int main(){
    cout<<"Enter the name either of Virat or Rohit"<<endl;
    string name;
    cin>>name;
    if(name == "Virat"){
        Virat :: show();
    }
    else if(name == "Rohit"){
        Rohit :: show();
    }
    else{
        cout<<"Invalid name"<<endl;
    }
}