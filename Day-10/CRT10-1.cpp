//string
#include<iostream>
#include<string>

using namespace std;

int main(){
    string strl="Hello ";
    cout<<endl;
    string strl2="Jecrc";
    cout<<strl<<strl2<<endl;
    
    //Methods Of String
    
    //1. Length of string

    int n=strl.length();
    cout<<"Length of string is "<<n<<endl;

    //2. Append string

    cout<<"After appending string is "<<strl.append(strl2)<<endl;

    //3. Empty string

    cout<<"Is string empty? "<<strl.empty()<<endl;

    //4. Concatetion of string

    cout<<"After concatetion of string is "<<strl+strl2<<endl;
    cout<<"After concatetion of string is "<<strl2+strl<<endl;

    //5. Push_Back method

    strl2.push_back('s');
    cout<<"After push_back method string is "<<strl2<<endl;

    //6. Pop_back Method

    strl2.pop_back();
    cout<<"After pop_back method string is "<<strl2<<endl;

    //7. find() method

    int index = strl.find("lo");
    cout<<"index of substring is "<<index<<endl;

    //8 Swap method

    strl.swap(strl2);
    cout<<"After swap method string is "<<strl<<" "<<strl2<<endl;
    cout<<"strl "<<strl<<"strl2 "<<strl2<<endl;

    //9.substring method

    string subStr = strl2.substr(0,3);
    cout<<"Substring is "<<subStr<<endl;

    //10. getline() method

    string strl3;
    cout<<"Enter a string with spaces: ";
    getline(cin,strl3);
    cout<<"You entered: "<<strl3<<endl;

    return 0;

}
