//find the odd value and odd position of array //
#include<iostream>
#include<stdio.h>
int main()
{
    using namespace std;
    int arr[ ]={5,6,7,8,9,1};
    int length = sizeof(arr)/sizeof(int);
    for(int i=0;i<6;i++){
        if(arr[i]%2==1 && i%2==1){
            cout<<"Array at "<<i<<" position is : "<<arr[i]<<"\n";
        }
        return 0;
    }
}