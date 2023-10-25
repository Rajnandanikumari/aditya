//check the array in sorted order //
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int arr[]={1,4,5,3};
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