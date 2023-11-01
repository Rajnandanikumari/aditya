#include<iostream>
#include<stdio.h>
using namespace  std;
int main()
{
  int arr[]={2,3,4,5,6,7};
  int n=6;
  int tar;
  cout<<"Enter thr value\n";
  cin>>tar;
  for(int i=0; i<6;i++)
  {
    for(int j=i;j<6;j++)
    {
      if(i>j)
    {
    tar=arr[i]-arr[j];
    }
    }
    cout<<tar;
  }
  return 0;
     
}