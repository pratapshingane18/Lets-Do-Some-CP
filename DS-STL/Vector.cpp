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
   
    // We know that there will be atleast 100 Elements and more 
    // So to reduce the cost of doubling the Memory Size of the Vector
    // We already Reserved 100 Elements 
     v.reserve(100);
    // Access Element
    cout<<v.at(2)<<endl;
    cout<<v[3]<<endl;

    // Get current Size
    cout<<v.size()<<endl;

    // Get the Underlying Capacity - How Much Memory has Been Allocated
    cout<<v.capacity()<<endl;

    // Max Size
    cout<<v.max_size()<<endl;

    //Push at Back
    v.push_back(6);


    // Pop from back

    v.pop_back();

    // Clear all the ELement in the vector
    v.clear();

    // Erase the 4th Element:
    v.erase(v.begin()+3);

    // Erase thr Range - the first 3 Elements:
    v.erase(v.begin(), v.begin() +3);

















    return 0;
}
