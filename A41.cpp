//find the index of an element //
#include<iostream>
#include<iostream>
#include<stdio.h>
int findIndex2(int num){
  int arr[]={3,4,5,2,3,4};
  int n=sizeof(arr)/sizeof(int);
   for(int i=0; i<n;i++){
             if(num==arr[i]){
              return i;
             }
            }
            return -1;
}
int main()
{
    using namespace std;
    int num;
    cout<<"Enter the number\n";
    cin>>num;
    cout<<findIndex2(num);
        
    return 0;
}


