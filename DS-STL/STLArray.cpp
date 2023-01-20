#include<iostream>
#include<array>
#include<algorithm>
using namespace std;



//Update an Array
void UpdateArray(array<int,6> &arr, int i, int val){
    arr[i] = val;
}

// Print Function
void Print(const array<int,6> arr){
    int n = arr.size();

    for(int i =0; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    array<int,6> arr = {1,2,3,4,5,6};

    arr[0] = 100;

    UpdateArray(arr, 1,50);

    Print(arr);
    cout<<endl;
    // for(int i =0; i < arr.size(); i++){
    // cout<<arr[i]<<endl;
    // }

    sort(arr.begin(), arr.end());

    Print(arr);

    return 0;
}