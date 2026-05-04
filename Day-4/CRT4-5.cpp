//Hallow square pattern code
#include<iostream>
using namespace std;
int main()
{
    int h;
    cout<<"Enter the height of the pattern: ";
    cin>>h;
    for(int i=1; i<=h; i++)
    {
        for(int j=1; j<=h; j++)
        {
            if(i==1 || i==h || j==1 || j==h)
            {
                cout<<"* "<<" ";
            }
            else
            {
                cout<<"  "<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}