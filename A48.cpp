//print the value //
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int rows,cols;
    int n=6;
    cout<<"Enter the rows\n";
    cin>>rows;
    cout<<"Enter the cols\n";
    cin>>cols;
    int arr[rows][cols];
    int count=1;
    for(int i=0;i<rows;i++)
    {
        for(int j=0; j<cols;j++)
        {
            cout<<"Enter "<<count<<" element : ";
            cin>>arr[i][j];
            count++;
        }
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                cout<<arr[i][j];
            }
        }

}
return 0;
}


