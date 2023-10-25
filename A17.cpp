//Second smallest element in an array//
// Online C++ compiler to run C++ program online
#include<iostream>
#include<stdio.h>
int main(){
      using namespace  std;
      int arr[4] ={3,6,8,4};
      int n =sizeof(arr)/sizeof(int);
      int smallest =arr[0];
      int temp;
      int s_largest=arr[0];
      int largest=arr[0];
      int cemp;
      int s_smallest =arr[0];
      for(int i=0;i<n;i++){
          if(arr[i]>largestt){
              s_largest=largest;
                largest=arr[i];
          }
          if(arr[i]<smallest){
              s_smallest=smallest;
                smallest =arr[i];
          }
    
      }
      cout<< "Second smallest element is: "<<s_smallest;
      cout<< "Second largest element is: "<<s_largest;
      return 0;
      }


