//print repeating element //

#include<iostream>
#include<stdio.h>
int main()
{
    using namespace std;
    int arr[]={2,3,4,5,6,7,2,4,6};
    for(int i=0; i<7;i++)
    {
        if(arr[i]>1)
        arr[i]++;
        cout<<"Number of repeating element "<<arr[i]<<"\n";
    }
    return 0;
}