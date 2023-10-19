//find the leader element //

#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int arr[]={5,7,4,6,3,9,8};
    int temp;
    int n=sizeof(arr)/sizeof(int);  
    for(int i=0;i<n;i++)  
        {
      if((arr[i-1]<arr[i]) && (arr[i]>arr[i+1])){
        cout<<arr[i]<<"\n";
    }
    }

    return 0;
}
