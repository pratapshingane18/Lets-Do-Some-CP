#include<iostream>
using namespace std;

void UpdateArray(int arr[], int index, int val){
    arr[index] = val;
}



// Pass Size of Array as the parameter
void PrintArray(int arr[], int n){
    // int n = arr.size();
    // If we try and do that it will return value of Size that pointer takes mostly 8
    
    
        for(int i =0; i < n; i++){
        cout<<arr[i]<<endl;
    }
}



int main()
{
    int arr[] = {1,5,3,4,2};

    int n = sizeof(arr)/sizeof(int);

    // actual Array is Updated
    UpdateArray(arr,2,50);


    PrintArray(arr,n);




return 0;
}
