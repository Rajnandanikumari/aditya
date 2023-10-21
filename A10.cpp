
#include<iostream>
#include<stdio.h>
int main()
{
    using namespace std;
    int arr[]={1,2,3,5,6,7};
    for(int i=0;i<7;i++)
    {
        if( (i)!= (arr[i]-1) ){
            cout<<"Missing number is : "<<(i+1)<<"\n";
            break;
        }
    }
    

return 0;
}