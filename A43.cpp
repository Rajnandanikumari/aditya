// transpose of element //
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int arr[2][2]={2,3,4,5};
    int row=2;
    int col=2;
   // int n = sizeof(arr)/sizeof(int);
    for(int i=0;i<row/2;i++)
    {
        for(int j=0;j<col;j++)
        {   int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }


    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {   cout<<arr[i][j];
        }
    }
    return 0;

}