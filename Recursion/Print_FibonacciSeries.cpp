// To print fibonacci series upto N
#include <iostream>
using namespace std;

void printfibonacci( int n)
{  
    static int n1= 0, n2= 1, n3; 
    if (n>0)      // base case 
    {
        n3 = n1 + n2 ;
        n1 = n2 ;
        n2 = n3 ;
        cout<< n3 <<" ";
    }
    printfibonacci(n-1);
}
int main()
{
    int n;
    cout << "Number of Elements : "<< endl;
    cin >> n;  // taking input from user for n elements
    cout<<"Fibonacci series : "<< endl;
    cout<< "0 " <<"1 ";
    printfibonacci(n-2); // we are taking (n-2) because 2 number 0,1 is already printed
    return 0;
}