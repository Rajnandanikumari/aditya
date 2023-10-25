//span of an array //

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
          if(arr[i]>largest){
              s_largest=largest;
                largest=arr[i];
          }
          if(arr[i]<smallest){
              s_smallest=smallest;
                smallest =arr[i];
          }
    
      }
      cout<< "Second smallest element is: "<<s_smallest;
      cout<< "Second largest element is: "<<s_largest<<"\n";
      cout<<s_largest-s_smallest<<"\n";
      return 0;
      }


