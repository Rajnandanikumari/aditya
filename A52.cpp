//add 2D array//
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[2][2] = {1,2,3,4};
    int b[2][2] = {3,4,5,6};
    int c[2][2],sum=0;

    for(int i=0; i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            sum=0;
         //   for(int k=0;k<2;k++)
            {
                sum=sum+a[i][j]+b[i][j];
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
        }
        return 0;
    }