//Sum of 2D array element//

#include<iostream>
#include<stdio.h>
int main()
    {
    using namespace std;
  //  int n=sizeof(arr)/sizeof(int);
    int n=6;
    int sum=0;
    int a[2][2]={1,4,7,8};
    int b[2][2]={4,5,8,9};
    int c[2][2];
    for(int i=0;i<2;i++)
    {
    for(int j=0;j<2;j++)
   // int arr_3[];
   // for(int k=n-1;k>0;k--)
    {
     sum= sum+a[i][j]+b[i][j];
    }
     c[i][j]=sum;
    }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
    {
      cout<<c[i][j]<<"\n";
    }
    
    return 0;
}

