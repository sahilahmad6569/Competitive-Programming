//C++ program to illustrate the concept of Multi-set
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Everything is same as set
    // It does not follow uniqueness rule
    // Means it can store duplicate elements
    multiset<int> a;
    a.insert(0);
    a.insert(1);
    a.insert(7);
    a.insert(2);
    a.insert(1);
    a.insert(5);
    a.insert(2);
    a.insert(2);
    a.insert(4);
    a.insert(3);
    a.insert(5);
    a.insert(5);
    a.insert(5);
    a.insert(5);
    a.insert(7);
    cout<<"Printing a :";
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    a.erase(1); // All 1's will be erased
    cout<<endl<<"Printing a:";
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    cout<<"The no. of 2's present: "<<a.count(2)<<endl;
    cout<<"The no. of 3's present: "<<a.count(3)<<endl;
    cout<<"The no. of 5's present: "<<a.count(5)<<endl;
    // Here count() counts each element (duplicate ko bhi)
    // Some more concepts with erase
    a.erase(a.find(2));
    //Only a single 2 will be erased
    cout<<endl<<"Printing a: ";
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    a.erase(a.find(5),a.find(5)+2);
    //It will delete 2 occurences of 5
    cout<<endl<<"Printing a: ";
    for(auto i:a)
    {
        cout<<i<<" ";
    }

    //Rest all the functions are the same as sets

    return 0;
}
