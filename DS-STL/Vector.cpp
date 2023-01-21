#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // Empty Container Constructor
    vector<int> first;

    // Fill  Constructor (5 integers with value 20)
    vector<int> second(5,20);
    
    // Range Constructor
    int number[] = {10,20,30,40,50};
    vector<int> third(number,number+2);

    // Copy Constructor
    vector<int> fourth(third);

    // Another Way
    vector<int> fifth = {1,2,3,4,5};

    // Push back Elements 
    vector<int> sixth;

    vector<int> v = {1,2,3,4,5};

    cout<<v.at(2);


    return 0;
}
