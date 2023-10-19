//find the pair difference(means difference is equal to target) //
#include<iostream>
#include<stdio.h>
using namespace  std;
int target(){
      int arr[4] ={1,2,3,4};
      int n =sizeof(arr)/sizeof(int);
      int tar=7;
      //cout<<"Enter the value";
     // cin>>a[i];
     // difference=arr[i]-arr[j];
     // cout<<difference;
      for(int i=0;i<n;i++)
      {
         for(j=i+1;j<n;j++)
          {
            if(arr[j]>arr[i])
              {
                difference=arr[i]-arr[j];
                cout<<difference;
              }
            if(tar==difference)
        {
            return tar;
        }
      }
          }
      cout<<"\n";
      }

      int main()
      {
        cout<<target();
        return 0;
      }
