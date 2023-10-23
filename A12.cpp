//Reverse the array element //
#include<iostream>
#include<stdio.h>
int main()
{
    using namespace std;
    int arr[]={2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);  
   for(int i=0;i<(n/2);i++)  
    {
        int temp = arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
        // cout<<"Element After reverse"<<arr[i]<<"\n";
    }

    cout<<"Element after reverse \n";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\n";
    }  
    return 0;
}