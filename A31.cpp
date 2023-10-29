
//first repeating/majority element in an array //
#include<iostream>
#include<iostream>
#include<stdio.h>
int main()
{
    using namespace std;
    int arr[]={3,4,5,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    int count=0;
     for(int i=0; i<n;i++){
         count =1;
          for(int j=0; j<n;j++)
           {
            if(arr[i]==arr[j])
            {
             count++;
             cout<<"First repeating of number is : "<<arr[i]<<"is"<<count<<"\n";
             break;
             
      }
           }
           break;
     }
    return 0;
}


