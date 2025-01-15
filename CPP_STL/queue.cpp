//C++ program to illustrate the concept of Queue
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Queue follows FIFO principle
    queue<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.emplace(5);

    cout<<"Front: "<<a.front()<<endl;
    cout<<"Back: "<<a.back()<<endl;

    a.pop();
    cout<<"Front: "<<a.front()<<endl;
    cout<<"Back: "<<a.back()<<endl;
    // Rest of the functions are the same as Stack
    return 0;
}
