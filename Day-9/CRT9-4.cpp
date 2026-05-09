//swap array with using third variable
#include <iostream>
using namespace std;
int main(){
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {6, 7, 8, 9, 10};
    int temp[5];
    for (int i=0; i<5; i++){
        temp[i] = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp[i];
    }
    cout<<"Array 1: ";
    for (int i=0; i<5; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"Array 2: ";
    for (int i=0; i<5; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
}