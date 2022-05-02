#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n, int key)
{
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2; // declaring mid like this because incase if int size is increased

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])            // if key is greater than mid then move to right part of array
        {
            start = mid + 1;
        }
        else end = mid -1 ;         // else move to left part
        mid = start + (end-start)/2;        // update mid
    }
    return -1;
}

int main()
{
    int even[6]={2,4,6,8,12,18};
    int odd[6]={1,3,5,7,9,11};

    int Evenindex = BinarySearch(even, 6, 18);
     int Oddindex = BinarySearch(odd, 6, 18);

    cout<< "index of even : "<<Evenindex << endl;
    cout<< "index of odd : "<<Oddindex;
    return 0;
    
}


