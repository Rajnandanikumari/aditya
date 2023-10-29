

// Union of array //
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[4]={2,3,4,6};
    int b[4]={4,5,6,1};
    int c[4];
    for(int i=0;i<4;i++)
    {
        if(c[i]==(a[i]||b[i]))
        for(int i=0;i<4;i++){
       cout<<"Union of array is: "<<c[i]<<"\n";
    }
    }
    return 0;
}
    
