//even sum of array//
#include<iostream>
#include<iostream>
#include<stdio.h>
int main()
{
    using namespace std;
    int arr[]={3,4,5,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    int sum=0;
    //int count=1;
     for(int i=0; i<n;i++){
        // count =0;
         // for(int j=0; j<n;j++)
            if(arr[i]%2==0)
            {
            sum=sum+arr[i];
            }
            
    }
    cout<<sum<<"\n";
    
        
    return 0;
}
