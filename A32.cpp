// sum of  1D array elements //

#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int arr[]={5,7,4,6,3,9,8};
    int sum=0;
    int n=sizeof(arr)/sizeof(int);  
    for(int i=0;i<n;i++)  
        {
      sum=sum*10+arr[i];
        }
    cout<<sum<<"\n";
}

