//majority element in an array //
#include<iostream>
#include<stdio.h>
int main()
{
    using namespace std;
    int arr[]={3,3,5,3,3,5,3,4};
    int n=sizeof(arr)/sizeof(int);
    int count=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j){
                continue;
            }
            if(arr[i]==arr[j]){
                count++;
            }
            if(j==(n-1)&&(count=n/2)){
                cout<<"element "<<arr[i]<<" is repeating element "<<"\n";
                break;
            }
            }
    }
            return 0;

}

