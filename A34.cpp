// sum of 1d array element with +1//

#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int arr[]={3,9,9};
    int sum=0;
    int n=sizeof(arr)/sizeof(int);  
    for(int i=0;i<n;i++)  
        {
      sum=sum*10+arr[i];
        }
        sum=sum+1;
    cout<<sum<<"\n";
    int arr;
    cin>>arr;
}

