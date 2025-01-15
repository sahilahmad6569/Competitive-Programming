//C++ program to illustrate the concept of Set
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Stores only unique elements and in order
    // Set = Sorted + Unique
    set<int> a;
    a.insert(1);
    a.insert(2);
    a.insert(3);
    a.emplace(2);
    a.insert(4);
    a.insert(0);
    a.insert(1);
    
    cout<<"Printing a: ";
    for(auto i:a)
    {
        cout<<i<<" ";
    }

    auto it = a.find(3); // This will return an iterator which points to the element 3
    //auto it = a.find(9); // This will return an iterator which points to a.end() cuz the element 9 is not present

    a.erase(3);
    cout<<endl<<"Printing a: ";
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Is 4 present in a: "<<a.count(4)<<endl;
    cout<<"Is 3 present in a: "<<a.count(3)<<endl;
    // If the element is present it is counted only once (as set stores only unique elements) so if an element is present is will return 1 and if it is not present it will return 0

    // Some more concepts in erase
    // You can also give the iterator of the element to be erased

    set<int> st;
    st.insert(1);
    st.insert(3);
    st.insert(2);
    st.insert(3);
    st.insert(1);
    st.insert(5);
    st.insert(1);
    st.insert(6);
    st.insert(1);
    st.insert(1);

    cout<<endl<<"Printing st: ";
    for(auto i:st)
    {
        cout<<i<<" ";
    }
    auto itr0=st.find(5);
    st.erase(itr0);
    cout<<endl<<"Printing st: ";
    for(auto i: st)
    {
        cout<<i<<" ";
    }
    auto itr1 = st.find(2);
    auto itr2 = st.find(3);
    st.erase(itr1,itr2); // Erasing in a range
    cout<<endl<<"Printing st: ";
    for(auto i:st)
    {
        cout<<i<<" ";
    }
    // Rest most of the functions are the same 
    // Every operation has Logarithmic time complexity i.e., O(logN)
    // Study about Upper bound and Lower bound
    return 0;
}
