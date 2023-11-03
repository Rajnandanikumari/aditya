// sum of  right diagonal  element //

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int rows,cols;
    int arr[3][3];
    int sum=0;
    cout<<"Enter the rows\n";
    cin>>rows;
    cout<<"Enter the cols\n";
    cin>>cols;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           if(i==j){
           sum=sum+arr[i][j];
        cout<<"Sum of number\n"<<sum<<"\n";
    }
        }
    }
    return 0;
        }