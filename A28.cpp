/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// 

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int arr[]={2,3,2,1,3,4,4};
    int temp;
    int n=sizeof(arr)/sizeof(int);  
    for(int i=0;i<n;i++) 
    {
        int count=0;
        for(int j=i+1;j<n;j++)
        {
        if(arr[i]==arr[j]){
            count++;
        }
        
        if((j==n-1) && (count==0)){
            cout<<arr[i];
            break;
        }
        }
        
        
    }

    return 0;
}


