// find the given element sorted or not //

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int arr[4];
    for(int i=0;i<5;i++)
    {
    cout<<"Enter the number\n";
    cin>>arr[i];
    }
    int temp;
    int n=sizeof(arr)/sizeof(int);  
    for(int i=0;i<n;i++)  
    {
        for(int j=i+1;j<n;j++)
        {
        if(arr[i]>arr[j])
        {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
           }
        }
        cout<<arr[i]<<"\n";
    }
    return 0;
    
}