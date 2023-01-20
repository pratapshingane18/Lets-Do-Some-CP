#include<iostream>
#include<array>
using namespace std;



//Update an Array
void UpdateArray(array<int,6> &arr, int i, int val){
    arr[i] = val;
}

int main(){

    array<int,6> arr = {1,2,3,4,5,6};

    arr[0] = 100;

    UpdateArray(arr, 1,50);

    for(int i =0; i < arr.size(); i++){
    cout<<arr[i]<<endl;
    }

    return 0;
}