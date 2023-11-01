// Online C++ compiler to run C++ program online
//find the max and min of element //
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int rows=3,cols=3;
    int arr[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
    int min=arr[0][0];
    int max=arr[0][0];
    for(int i=0;i<rows;i++)
    {
        for(int j=0; j<cols;j++)
        {
            if(min>arr[i][j]){
                 min=arr[i][j];
            }
            if(max<arr[i][j]){
                 max=arr[i][j];
            }
        }
    }
    cout<<"max element is : "<<max<<"\n";
    cout<<"min element is : "<<min;

return 0;
}


