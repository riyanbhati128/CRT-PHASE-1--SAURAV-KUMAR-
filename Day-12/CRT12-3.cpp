//Insertion Sort
#include<iostream>
using namespace std;

void swap_array(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void Insertion_Sort(int nums[], int n)
{
    for(int i = 1; i<n; i++){
        int key = nums[i];
        int j = i-1;
        while(j>=0 && nums[j] > key){
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = key;
    }
}

int main(){
    int n; 
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int nums[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i =0; i<n; i++){
        cin>>nums[i];
    }
    Insertion_Sort(nums, n);
    cout<<"The sorted array is: "<<endl;
    for(int i = 0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}