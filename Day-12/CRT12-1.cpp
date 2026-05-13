//Bubble sort algorithm
#include<iostream>
using namespace std;

void swap_array(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int Bubble_Sort(int nums[], int n)
{
    for(int i = 0; i<n;i++){
        bool flag = false;
        for(int j = 0; j<n-i-1;j++){
            if(nums[j] > nums[j+1]){
                swap_array(nums[j], nums[j+1]);
                flag = true;
            }
        }
        if(!flag){
            break;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int nums[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n;i++){
        cin>>nums[i];
    }
    Bubble_Sort(nums, n);
    cout<<"Sorted array: ";
    for(int i = 0; i<n;i++){
        cout<<nums[i]<<" ";
    }
}