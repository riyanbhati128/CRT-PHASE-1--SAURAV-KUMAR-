//Selection Sort
#include<iostream>
using namespace std;

void swap_array(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int Selection_Sort(int nums[], int n)
{
    for(int i = 0; i<n-1; i++){
        int mini = i;
        for(int j = i+1; j<n; j++){
            if(nums[j] < nums[mini]){
                mini = j;
            }
        }
        if(mini != i){
            swap_array(nums[i], nums[mini]);
        }
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int nums[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    Selection_Sort(nums, n);
    cout<<"The sorted array is: "<<endl;
    for(int i = 0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}