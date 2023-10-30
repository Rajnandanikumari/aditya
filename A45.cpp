// find the index of element //

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int a[6]={2,3,4,5,6};
  int num;
  int n=sizeof(a)/sizeof(int);
  cout<<"Enter the element"<<"\n";
  cin>>num;
  for(int i=0;i<n;i++)
  {
    cout<<"Index of array"<<i<<"\n";
  }
  return 0;

}