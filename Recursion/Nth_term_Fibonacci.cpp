// Print the Nth term of fibonacci
#include <iostream>
using namespace std;

int fibo( int n)
{
    if (n == 1 || n == 2)
    return n-1;
    int answer;
    int a =0 , b= 1;
    for (int i=3;i<=n;i++)
    {
        answer = a +b;
        a = b ;
        b = answer ;
    }
    return answer;
}

int main()
{
    int n;
    cin >> n;  // taking input from user for Nth term
    cout<< "Nth term of Fibonacci number is "<<  fibo(n) << endl;
    return 0; 
}