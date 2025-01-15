//C++ program to illustrate the concept of Priority Queue
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Same as Queue
    //Largest element will be placed at the top
    // Important- It is also known as Max. Heap
    priority_queue<int> a;
    a.push(10);
    a.push(20);
    a.push(350);
    a.push(40);
    a.push(50);
    a.emplace(60);

    cout<<a.top()<<endl;
    a.pop();
    cout<<a.top()<<endl;
    // size() and swap() as the same 

    //Syntax to declare a minimum priority queue
    // Important- It is also known as Min. Heap
    priority_queue<int, vector<int>, greater<int>> b;
    b.push(10);
    b.push(20);
    b.push(350);
    b.push(40);
    b.push(50);
    b.emplace(60);

    cout<<b.top()<<endl;
    b.pop();
    cout<<b.top()<<endl;

    return 0;
}
