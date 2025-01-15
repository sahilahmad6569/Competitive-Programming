// C++ Program to illustrate the concept of Pairs
#include<iostream>

using namespace std;

int main()
{
    pair<int,int> p1 = {1,5};
    cout<<p1.first<<" "<<p1.second<<endl;
    
    pair<int,pair<int, int>> p2 = {1,{2,3}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;

    pair<int, string> p3 = {101,"John"};
    cout<<p3.first<<" "<<p3.second<<endl;

    cout<<endl<<endl;

    pair<int, int> p4[3]= {{1,2},{2,3},{3,4}};
    for(int i=0;i<3;i++)
    {
        cout<<p4[i].first<<" "<<p4[i].second<<endl;
    }

    return 0;
}
