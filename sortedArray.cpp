#include<iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
   if( size == 0 || size == 1) // base case 
    return true;

    if (arr[0] > arr[1])
     return false;
     else 
     {
         bool remainingPart= isSorted( arr+1, size-1); // Recursive call for function isSorted();
         return remainingPart;
     } 
}


int main()
{
 int arr[5]={2,4,10,8,9}; // array initialization
 int size = 5;

 bool ans =  isSorted(arr, size); // function calling

 if (ans)
 cout<< "Array is sorted"<<endl;
 else 
 cout<<"Array is not sorted"<<endl;

}