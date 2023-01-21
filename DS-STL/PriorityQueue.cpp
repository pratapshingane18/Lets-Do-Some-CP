#include<iostream>
#include<queue>
using namespace std;

int main(){

  int arr[] = {10,15,50,25,30};
  int n = sizeof(arr)/sizeof(int);
    // By default Max Heap
    // priority_queue<int> heap;

    // to convert into Min Heap

    priority_queue<int,vector<int>, greater<int>> heap;

    for(int x: arr){
        heap.push(x);
    }

    while(!heap.empty()){
        cout<<heap.top()<<endl;
        heap.pop();
    }
    return 0;
}