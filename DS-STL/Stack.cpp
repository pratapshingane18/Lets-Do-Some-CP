#include<iostream>
#include<stack>
using namespace std;

int main(){


    stack<string> books;

    books.push("CPP");
    books.push("Java");
    books.push("Python");
    books.push("JavaScript");

    while(!books.empty()){
        cout<<books.top()<<" ";
        books.pop();
    }

    books.push("English");
    cout<<books.top();
    return 0;
}