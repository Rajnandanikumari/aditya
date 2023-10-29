//find the pair sum of element(means that sum is equal to target element)
//find the target element //

#include<iostream>
#include<stdio.h>
using namespace  std;
int target(){
      int arr[4] ={1,2,3,4};
      int n =sizeof(arr)/sizeof(int);
      int tar;
      int a,b;
      int sum=0;
      cout<<"Enter the value";
      cin>>a>>b;
      sum=a+b;
      cout<<sum;
      cout<<"Enter the target\n";
      cin>>tar;
      for(int i=0;i<n;i++)
      {
        if(tar==sum)
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

