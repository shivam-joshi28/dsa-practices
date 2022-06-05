#include <iostream>
#include<array>

using namespace std;

int main()
{
    array<int,5> a ={ 1,2,3,4,5};

    cout<<"Element at index 2 = "<<a.at(2) <<endl;

    cout<< "Empty or not = "<<a.empty()<<endl; 

    cout<< "first element = "<<a.front()<<endl;

    cout<< "last element = "<< a.back()<<endl;
}