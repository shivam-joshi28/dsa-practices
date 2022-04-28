#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int arr[], int size)
{
    int max = INT_MIN;

    for (int i=0; i<size; i++)
    {
        if (arr[i]>max)
        max = arr[i];
    }
    return max;
}
int getMin(int arr[], int size)
{
    int min = INT_MAX;

    for (int i=0; i<size; i++)
    {
        if (arr[i]<min)
        min = arr[i];
    }
    return min;
}
int main(){

    int size ;
    cin>> size;

    int array[100];

    for (int i=0;i<size;i++)        // taking input from user in array
    {
        cin>>array[i];
    }
 
    cout << "Maximum element in array :"<< getMax(array,size)<< endl;
    cout << "Minimum element in array :"<< getMin(array,size)<< endl;
    
}