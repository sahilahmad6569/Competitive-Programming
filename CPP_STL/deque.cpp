//C++ program to illustrate the concepts of Deque
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> a;
    a.push_back(1);
    a.push_back(2);

    a.emplace_back(3);
    a.emplace_back(4);

    a.push_front(0);
    a.emplace_front(-1);

    a.pop_back();
    a.pop_front();

    cout<<endl<<"Printing a: ";
    for(auto i:a)
    {
        cout<<i<<" ";
    }

    a.back();
    a.front();

    cout<<endl<<a.front()<<endl;
    cout<<endl<<a.back()<<endl;

    // Rest of the fuctions are similar
    return 0;
}
