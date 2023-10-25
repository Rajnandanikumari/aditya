//Second largest element in an array//
// Online C++ compiler to run C++ program online
#include<iostream>
#include<stdio.h>
int main(){
      using namespace  std;
      int arr[4] ={3,6,8,4};
      int n =sizeof(arr)/sizeof(int);
      int largest =arr[0];
      int temp;
      int s_largest =arr[0];
      for(int i=0;i<n;i++){
          if(arr[i]>largest){
              s_largest=largest;
                largest =arr[i];
          }
    
      }
      cout<< "Second Max element is: "<<s_largest;
      return 0;
      }


