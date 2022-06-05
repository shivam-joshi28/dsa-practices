#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.push_back(1);                                 // Insert element in vector 
    cout<<"Capacity -> "<<v.capacity()<<endl;

     v.push_back(2);
    cout<<"Capacity -> "<<v.capacity()<<endl;

     v.push_back(3);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    cout<<"size -> "<<v.size()<<endl;

    // before pop 
    cout<<"Before pop elements are :"<<endl;
    for(int i:v)
    {
        cout<< i <<" ";
    }
    cout<< endl;
    
    v.pop_back();                               // remove element from vector
    // After pop
    cout<<"After pop elements are : "<<endl;
    for(int i:v)
    {
        cout<< i <<" ";
    }


}