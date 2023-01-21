#include<iostream>
#include<deque>
using namespace std;

int main()
{
    // Empty Deque of Int
    deque<int> first;

    // four Int woth Value 100
    deque<int> second (4,100);

    // Iterating through second
    deque<int> third (second.begin(), second.end());

    // A copy of child
    deque<int> fourth(third);

    // The iterator Constructor can be used to copy Arrays:
    int myints[] = {1,2,3,4,5};

    int n = sizeof(myints)/sizeof(int);

    deque<int> fifth(myints, myints+n);

    
    deque<int> dq;
    dq.push_back(5);
    dq.push_back(10);
    dq.push_back(15);

    dq.pop_back();

    dq.push_front(100);
    dq.push_front(95);
    dq.push_front(90);

    dq.pop_front();

    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;


    return 0;
}
