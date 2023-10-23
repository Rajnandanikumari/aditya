//find the pair difference(means difference is equal to target) //
#include<iostream>
#include<stdio.h>
using namespace  std;
int target(){
      int arr[4] ={1,2,3,4};
      int n =sizeof(arr)/sizeof(int);
      int tar;
      int a,b;
      int difference=0;
      cout<<"Enter the value";
      cin>>a>>b;
      difference=a-b;
      cout<<difference;
      cout<<"Enter the target\n";
      cin>>tar;
      for(int i=0;i<n;i++)
      {
        if(tar==difference)
        {
            return tar;
        }
      }
      cout<<"\n";
      }

      int main()
      {
        cout<<target();
        return 0;
      }
