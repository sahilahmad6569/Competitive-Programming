//C++ program to illutrate various algorithms
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Custom comparator implementation
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if(p1.second<p2.second)
        return true;
    if(p1.second>p2.second) // This will automatically swap internally
        return false;
    // If they are the same
    if(p1.first>p2.first)
        return true;
    if(p1.first<p2.first) // This will automatically swap internally
        return false;
}
int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(32);
    a.push_back(4);
    a.push_back(76);
    a.push_back(0);
    a.push_back(1);
    a.push_back(21);
    a.push_back(1);
    a.push_back(4);

    cout<<endl<<"Before sorting: ";
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    // Sorting algorithm
    sort(a.begin(),a.end());
    // sort(a, a+n); // Sorts from a[0] to a[n-1]
    // Note- [start, end)
    cout<<endl<<"After sorting: ";
    for(auto i:a)
    {
        cout<<i<<" ";
    }

    // Sorting in descending order syntax
    sort(a.begin(),a.end(),greater<int>);// Here greater<int> is a comparator, and you can also write your own comparator

    cout<<endl<<"After sorting: ";
    for(auto i:a)
    {
        cout<<i<<" ";
    }

    pair<int, int> a[]={{1,3},{2,1},{4,1}};
    // Sort it according to the second element
    // If second element is same, then sort it according to first element but in descending
    sort(a, a+3, comp);// Here comp is my custom comparator to achieve the above mentioned functionality, it must return a boolean expression

    // A very interesting STL function
    int num1 = 7;
    int cnt1 = __builtin_popcount(num1);
    // It returns the count of set bits in the number (the number of 1's in the binary representation of the number)
    long long num2 = 1234567833;
    int cnt2 = __builtin_popcountll(num2);// For long long datatype _builtin_popcountll() is used

    string s ="123";
    do
    {
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
    //This will print all the permutations of the string in dictionary order
    //When all the permutations are printed, it will return false and the loop will break
    // Suppose if the string is 312, then it will print 312, 321 only not from the starting like 123, 132, 213,.... Because it starts from the dictionary order so it's better to sort the string sort(s.begin(),s.end()) before printing permutations

    int max = *max_element(a,a+n); // This will return the maximum element present in the array a in the range a[0] to a[n-1]
    // Similarly 
    int min = *min_element(a,a+n); // This will return the minimum element present in the array a in the range a[0] to a[n-1]

    return 0;
}
