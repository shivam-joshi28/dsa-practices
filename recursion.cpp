#include<iostream>
using namespace std;

void fun(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        fun(n-1);  // recursive call for printing no. from 10 to 1
    }
}
int main(){
    int x=10;
    fun(x);
    return 0;
}