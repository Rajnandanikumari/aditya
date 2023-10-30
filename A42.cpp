// sum of diagonal element //
#include<iostream>
#include<iostream>
#include<stdio.h>
int main()
{
    using namespace std;
    int arr[2][2]={2,3,4,6};
    int row=2;
    int col=2;
    // int n=sizeof(arr)/sizeof(int);
    int sum=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
        if((i==j)||((i+j)==(row-1))){
            sum = sum+arr[i][j];
        }
        
        }
    }
    cout<<sum;
    return 0;
}
