//C++ program to illustrate some cool algorithms
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Binary Search
    vector<int> v;
    v.push_back(2);
    v.push_back(23);
    v.push_back(0);
    v.push_back(21);
    v.push_back(1);
    v.push_back(7);
    v.push_back(87);
    v.push_back(12);
    sort(v.begin(),v.end()); // As binary search works only on sorted arrays
    cout<<"is 1 present: "<<binary_search(v.begin(),v.end(),1)<<endl;
    cout<<"is 5 present: "<<binary_search(v.begin(),v.end(),5)<<endl;

    // min,max
    int a = 21;
    int b = 32;
    cout<<"max: "<<max(a,b)<<endl;
    cout<<"min: "<<min(a,b)<<endl;

    // swapping
    cout<<"a: "<<a<<" b: "<<b<<endl;
    swap(a,b);
    cout<<"a: "<<a<<" b: "<<b<<endl;

    // reversing a string
    string s = "sahil";
    cout<<"before reversing: "<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<"after reversing: "<<s<<endl;
    
    // upper bound and lower bound
    // Work in progress (still not cleared)
    vector<int> x= {1,2,4,5,5,9};
    cout<<"The first  element just just less than 2 is : "<<*(lower_bound(x.begin(),x.end(),2))<<endl;
    cout<<"The first  element just just greater than 4 : "<<*(upper_bound(x.begin(),x.end(),4))<<endl;

    return 0;
}
