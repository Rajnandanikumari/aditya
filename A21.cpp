//find the target element //

#include<iostream>
#include<stdio.h>
using namespace  std;
int target(){
      int arr[4] ={1,2,3,4};
      int n =sizeof(arr)/sizeof(int);
      int tar;
      cout<<"Enter the value";
      cin>>tar;
      for(int i=0;i<n;i++)
      {
        if(tar==arr[i])
        {
            return arr[i];
        }
      }
     cout<<"\n";
      }

      int main()
      {
        cout<<target();
      //return 0;
      }

