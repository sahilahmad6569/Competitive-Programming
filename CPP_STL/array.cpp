//C++ program to illustrate the concept of Array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3]={1,2,3}; // Normal array (Static)
    array<int, 3> b ={1,2,3} // STL array (Ye bhi Static), internally it is implemented by using a normal array, that's why it is not used, cuz it has no difference from the normal array

    return 0;
}
