//Take the number from user an then decide it is sorted or not //
// find the given element sorted or not //

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{   int n =4;
    int arr[n];
    cout<<"Enter the number\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   // int temp;
    // int n=sizeof(arr)/sizeof(int);  
    for(int i=0;i<n;i++)  
    {
        if(arr[i]>arr[i+1]){
        cout<<"Array is not sorted\n";
        break;
        }
    }
    return 0;
    
}