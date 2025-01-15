//C++ program to illustrate the concept of Stack
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Stack follow LIFO principle
    // There is nothing like a[0],a[1], as in arrays and vectors
    // There are mainly three function in Stack: push, pop, top

    stack<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    a.emplace(6);

    cout<<"Top element: "<<a.top()<<endl;
    a.pop();
    cout<<endl<<"After pop"<<endl;
    cout<<"Top element: "<<a.top()<<endl;

    cout<<"Size of a: "<<a.size()<<endl;
    cout<<"Is a empty: "<<a.empty()<<endl;

    stack<int> b;
    b.swap(a); // Swaps a and b
    return 0;
}
