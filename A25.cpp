//frequency of numbers //

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
         count =0;
          for(int j=0; j<n;j++)
           {
            if(arr[i]==arr[j])
              count++;
           }
          cout<<"frequency of number is : "<<arr[i]<<"is"<<count<<"\n";
        
      }
        
    return 0;
}
