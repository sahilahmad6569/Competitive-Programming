//C++ program to illustrate the concepts of Maps
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Map stores Key-Value pair
    // Keys must always be unique 
    // Values may or may not be unique
    // The key and value can be of any data type e.g. int, double, string, pair, etc.
    // Imp - Map stores unique keys in sorted order

    map<int, int> a;
    a[0]=1;
    a[1]=2;
    a[2]=3;
    a[3]=4;
    a[4]=5;

    map<int, string> b;
    b.insert({1,"Sahil"});
    b.insert({2,"Ahmad"});
    b.emplace(3,"Dennis");
    b.emplace(4,"Ritchie");
    for(auto itr:b)
    {
        cout<<"Serial Number: "<<itr.first<<" "<<"Name: "<<itr.second<<endl;
    }

    map<int, pair<int, int>> c;
    c[1]={1,2};

    map<pair<int, int>, int> d;
    d[{2,3}]=10;

    // Accessing elements
    cout<<a[1]<<endl; 
    cout<<a[7]<<endl; // As the key 7 is not present it will print 0 
    auto itr1 = a.find(2); // Returns the iterator of the element 2
    cout<<(*itr1).second<<endl;
    auto itr2 = a.find(9); // As 9 is not present it will point to a.end()
    auto itr3 = a.lower_bound(1);
    auto itr4 = a.upper_bound(4);
    // Rest of the functions are the same as before
  
    return 0;
}
