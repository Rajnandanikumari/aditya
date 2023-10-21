//find the length and size of array //

#include<iostream>
#include<stdio.h>
int main()
{
    using namespace std;
    int arr[]={4,5,6,7,8,9};
    int length= sizeof(arr)/sizeof(int);
    for(int i=0;i<6;i++)
    {
        cout<<"Size of my array is: "<<sizeof(arr)<<"\n";
        cout<<"Length of my array is : "<<sizeof(arr)/sizeof(int)<<"\n";
    }
        return 0;
    
}