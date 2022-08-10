
// CPP program to illustrate the 
// set::find() and set::count() functions 

#include <iostream>
#include <set>
#include <algorithm>

using namespace std; 

int main() 
{ 
    // Initialize set 
    set<int> s; 

    s.insert(1); 
    s.insert(4); 
    s.insert(2); 
    s.insert(5); 
    s.insert(3); 

    // iterator pointing to 
    // position where 2 is 
    auto pos = s.find(3); 
    
    if(pos != s.end())
        cout<<"Element Found.\n";
    else
        cout<<"Element not Found.\n";
        
    // prints the set elements 
    cout << "The set elements after 3 are: "; 
    for (auto it = pos; it != s.end(); it++) 
        cout << *it << " "; 
    
    // Check if 4 is present in the Set using 
    // count() function
    if(s.count(4)!=0)
        cout<<"\n4 is present";
    else
        cout<<"\n4 is not present";
        
    return 0; 
} 

// Output:

// Element Found.
// The set elements after 3 are: 3 4 5
// 4 is present

/*The set::find() is a built-in function in C++ STL which returns an iterator to the 
element which is searched in the set container. It accepts the element to be searched 
as a parameter and if the element is not found, then it returns an iterator pointing 
to the position just after the last element in the set otherwise if the element is found, 
it returns an iterator pointing to that element.
The set::count() function works similar to the find() function. As the name suggests it is 
supposed to count the number of occurrences of the element present in the set, 
but as set does not allows duplicate elements, the function count() returns 0 if 
the element is not present in the set otherwise it returns 1.*/