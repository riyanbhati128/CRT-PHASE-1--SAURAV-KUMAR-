#include<iostream>
using namespace std;

bool poweroftwo (int x)
{
    if(x == 0) return false;
    if(x == 1) return true;
    return (x % 2 == 0) && poweroftwo(x / 2);
}

int main()
{
    int t;
    cout<<"Enter number of times code to be run: "<<endl;
    cin>>t;
    while(t--){
        int x;
       cout<<"Enter a number:  "<<endl;
       cin>>x;
       bool result = poweroftwo(x);
       if (result)
            cout<<x<<" is a power of 2."<<endl;
        else
            cout<<x<<" is not a power of 2."<<endl;
    }       
return 0;
       
}