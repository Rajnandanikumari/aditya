//Binary search //
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
   int arr[5]={2,4,5,6,7};
   int n=5;
   int i,j;
   int temp;
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
   if(arr[i]>arr[i+1])
     temp=arr[i];
     arr[i]=arr[j];
     arr[j]=temp;
       }
   }
     {
       cout<<"Binary search is : "<<arr[i]<<"\n";
     }
     return 0;
}