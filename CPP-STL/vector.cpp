// C++ program to illustrate the concept of Vectors
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    // Initially the capacity of v is zero
    // capacity() - Capacity to store the number of elements
    // size() - The number of elements present in the vector
    // When the vector becomes full, a new vector is created of the double size of the previous one and the old vector is copied into this new vector
    v.push_back(10);
    v.emplace_back(20); // emplace_back() is faster than push_back()

    vector<pair<int,int>> b;
    b.push_back({1,2});
    b.emplace_back(3,4); // No need of braces

    vector<int> x(5,100);
    for(int i=0;i<5;i++)
    {
        cout<<x[i]<<endl;
    }

    cout<<endl<<endl;

    vector<int> y(5);
    for(int i=0;i<5;i++)
    {
        cout<<y[i]<<endl;
    }

    vector<int> p(3,20);
    vector<int> q(p);
    for(int i=0;i<3;i++)
    {
        cout<<q[i]<<endl;
    }

    cout<<b[0].first<<" "<<b[0].second<<endl;
    cout<<b[1].first<<" "<<b[1].second<<endl;

    cout<<v.at(0)<<" "<<v.at(1)<<endl;
    vector<int> a;
    int n;
    int element;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the numbers"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>element;
        a.push_back(element);
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a.at(i)<<endl;
    }
    
    //Iterators

    vector<int>:: iterator itr = a.begin(); //Points to the first element a[0]
    cout<<endl<<endl<<*itr<<endl<<endl;
    while(itr!=a.end())
    {
        cout<<*itr<<" ";
        itr++;
    }

    cout<<endl;
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    // {1,2,3,4,5}
    // vec.begin() points to the first element i.e.,  vec[0]
    // vec.end() points to the element just after the last element i.e., vec[5]
    // vec.back() point to the last element i.e., vec[4]

    vector<int>:: iterator i = vec.begin();
    while(i!=vec.end())
    {
        cout<<*i<<endl;
        i++;
    }
    
    // Reverse iterators
    // vec.rbegin() --> This will point to v[4]
    // vec.rend() --> This will point to the element just befor v[0]
    // Note- When we do itr++ in the above two cases of reverse, it will in the reverse direction

    // Different ways to traverse the vector using loop
    // One of the ways is already discussed above using the while loop

    //Ist method
    cout<<endl;
    for(vector<int>:: iterator i = vec.begin();i!=vec.end();i++)
    {
        cout<<*i<<endl;
    }
    //IInd method
    cout<<endl;
    for(auto i = vec.begin();i!=vec.end();i++)
    {
        cout<<*i<<endl;
    }
    //IIIrd method (Easiest)
    cout<<endl;
    for(auto i: vec ) // Here auto is int
    {
        cout<<i<<endl;
    }

    // Erase in vector
    cout<<endl;
    vec.erase(vec.begin());
    for(auto i:vec)
    {
        cout<<i<<endl;
    }

    // Erase in vector (in range)
    cout<<endl;
    vec.erase(vec.begin(),vec.begin()+2);
    // Note it behaves like [start,end)
    for(auto i:vec)
    {
        cout<<i<<endl;
    }

    //Insert in vector
    vector<int> c(2,100);
    c.insert(c.begin(),50);//{50,100,100}
    cout<<endl;
    for(auto i: c)
    {
        cout<<i<<endl;
    }
    //Insert in vector
    cout<<endl;
    c.insert(c.begin()+1,3,8);// {50,8,8,8,100,100}
    for(auto i: c)
    {
        cout<<i<<endl;
    }
    // Copy in vector
    vector<int> r;
    r.push_back(10);
    r.push_back(20);
    r.push_back(30);
    r.push_back(40);
    r.push_back(50);

    cout<<endl<<endl;
    for(auto i:r)
    {
        cout<<i<<" ";
    }

    vector<int> s;
    s.push_back(1);
    s.push_back(2);
    s.push_back(3);
    s.push_back(4);
    s.push_back(5);

    s.insert(s.begin(),r.begin(),r.end());

    cout<<endl<<endl;
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl<<"Size of vector s:"<<s.size()<<endl;
    s.pop_back();
    cout<<endl<<endl;
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl<<"Size of vector s:"<<s.size()<<endl;

    //Swapping two vectors
    r.swap(s); // This will swap r and s
    cout<<endl<<"Vector r"<<endl;
    for(auto i:r)
    {
        cout<<i<<" ";
    }
    cout<<endl<<"Vector s"<<endl;
    for(auto i:r)
    {
        cout<<i<<" ";
    }

    r.clear();// Erases the entire vector and trims it to zero size, capacity will remain the same
    cout<<endl;
    cout<<r.empty()<<endl;// To check if the vector is empty

    return 0;
}
