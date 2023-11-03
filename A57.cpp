
#include<iostream>
#include<stdio.h>
using namespace std;
int kthmin()
{
    int arr[2][2]={{2,3},{4,5}};
    int min=arr[0][0];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
        if(arr[i][j]<min)
        min=arr[i][j];
    {
        cout<<min<<"\n";
        break;
    }
        }
        break;
    }

   return 0;
}


int main()
{
    using namespace std;
  //  int arr[]={2,3,4,5};
    kthmin();
    return 0;
}