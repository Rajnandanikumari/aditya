#include<stdio.h>
int main()
{
int i,f=1;
printf("Enter a number\n");
scanf("%d\n",&n)
for(i=2;i<=n;i++)
{
   c=a+b;
   a=b;
   b=c;
}
printf("the %d the fibonacci number is %d",num,b);
return 0;
}

#include<stdio.h>
  int main()
  {
      int num,a=0,b=1,c=0;
      printf("Enter the number\n");
      scanf("%d",num);
      printf("First %d FIBONACCI numbers are...\n",num);
      printf("%d\n",fib1);
      printf("%d\n",fib2);
      count=2;
      while(count<num)
      {
          fib3=fib1+fib2;
          count++;
      }
          printf("%d\n",fib3);
          fib1=fib2;
          fib2=fib3;
      }
      }


  #include<stdio.h>
  int main()
  {
      int num,a=0,b=1,c=0,f=1;
      printf("Enter the number\n");
      scanf("%d",num);
      printf("First %d FIBONACCI numbers are...\n",num);
      printf("%d\n",fib1);
      printf("%d\n",fib2);
      count=2;
      while(count<num)
      {
          fib3=fib1+fib2;
          if(x==fib3)
          {
              flag1
              break;
          }
      }
      if(f==1)
        printf("FIBONACCI series\n");
      else
        printf("Not FIBONACCI series\n");
      return 0;
      }


  #include<stdio.h>
  int main()
  {
      int num,i,sum=0,r;
      printf("Enter a number")
      scanf("%d"&num)
      while(num>0)
      {
          r=num%10;
          sum=sum+r*r*r;
          num=num/10;
      }
      if(num==sum)
        printf("%d is Armstrong number\n");
      else
        printf("%d is not Armstrong  number\n");
      return 0;
      }

      #include<stdio.h>
      int main()
      {
          int x,y;
          printf("Enter two number\n");
          scanf("%d%d",&x,&y);
          for(i=1;i<x*y;i++)
          {
              if((i/x==0)&&(i/y==0))
                HCF=x*y/LCM;
              {
                  printf("HCF of %d and %d is %d",x,y,i);
              break;
              }
          }
          return 0;
      }

      #include<stdio.h>
      int main()
      {

          int x,y;
          printf("Enter two numbers\n");
          scanf("%d%d",&x,&y);
          for(i=1;i<x*y;i++)
          {
              if((i/x==0)&&(i/y==0))
              {
                  if(HCF==1)
                    printf("it is co- prime number\n");
                  else
                    printf("it is not co-prime\n");
              }
              }
              return 0;
          }

          #include<stdio.h>
          int main()
          {
              int i,N,flag;
              for(i=2;i<=N/2;i++)
              {
                  if(N%i==0)
                  {
                      flag++;
                      break;
                  }
              }
              if(flag==0&&N!=1)
              {
                  printf("%d",N);
              }
              }
              return 0;
            }

          #include<stdio.h>
          int main()
          {
              int i,N,flag;
              {
                  flag=0;
                  for(i=2;i<=N/2;i++)
                  {
                      if(N%i==0)
                      {
                          flag++;
                          break;
                      }
                  }
                  if(flag==0&&N!=1)
                  {
                      printf("%d",N);
                  }
              }
              return 0;
              }

          #include<stdio.h>
          #include<stdio.h>
          int main()
          {
              int x=15,count=0,sum=0;
              int n=x;
              while(n!=0)
          {
              n=n/10;
              count++;
          }
          n=x;
          while(n!=0)
          {
              sum=sum+pow(n%10,count);
              n=n/10;
          }
          if(x==sum)
            printf("Yes,it is Armstrong number\n");
          else
            printf("No,it is not Armstrong number\n");
          return 0;
          }
  #include<stdio.h>
  int main()
  {
      int num,i,sum=0,r;
      printf("Enter  a number\n");
      scanf("%d",&num)
      while(num>0)
      {
          r=num%10;
          sum=sum+r*r*r;
          num=num/10;
      }
      if(num==sum)
        printf("%d is Armstrong number\n");
      else
        printf("%d is not Armstrong number\n");
      return 0;
      }

      #include<stdio.h>
      int main()
      {
        int x=12,count=0;
        while(x!=0)
         {
            count++;
            if(x&1==1)
                break;
            else
                x=x>>1;
        }
        printf("First 1 from LSM is at %d \n\n\n",count)
        return 0;
        }






