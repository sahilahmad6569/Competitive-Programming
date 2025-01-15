// C++ program to illustrate the concept of lists
#include<iostream>
#include<bits/stdc++.h> // This library contains all the STL libraries like vector, list, string, set and so on. No need to include multiple header files
using namespace std;

int main()
{
    // It is also a dynamic container just like vectors. The only difference is that there are functions to perform front operations in list which is not available in vectors.
   
    list<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.emplace_back(4);
    a.emplace_back(5);
    
    cout<<endl<<"Printing a: ";
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    
    a.push_front(0);
    a.emplace_front(-1);
    cout<<endl<<"Printing a: ";
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    //Rest all the functions are same as in the vectors
    // like begin, end, rbegin, rend, clear, insert, erase, size, swap, etc.
    
    return 0; 
}
