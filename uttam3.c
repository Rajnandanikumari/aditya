#include<stdio.h>
int main()
{
   int num;
   printf("Enter the number\n");
   scanf("%d",&num);
   if(num>0)
    printf("number is positive\n")
    else
    printf("number is negative\n");
   return 0;
}

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num%5==0)
        printf("Number is divisible by 5\n");
    else
        printf("Number is divisible by 5");
    return 0;
}

#include<stdio.h>
int main()
{
  int num;
  printf("Enter the number\n")
  scanf("%d",&num);
  if(num%2==0)
    printf("Number is even\n");
  else
    printf("Number is odd\n");
  return 0;
}

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num&1)
        printf("Number is odd\n");
    else
        printf("Number is even\n");
    return 0;
}

#include<stdio.h>
int main()
{

    float a,b,c,flog=0;
    printf("Enter value for a,b,and c\n");
    scanf("%f%f%f,&a,&b,&c");
    if(a>b)
    {
        flog=((b+c)>a);
    }
    else if(b>c)
    {
        flag=((a+c)>b);
    }
    else
    {
        flag=((a+b)>c);

    }
    if(flag)
    {
        printf("valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle\n");z
    }

    #include<stdio.h>
    int main()
    {
        double a,b,c,d,real root,imaginary root,requal root;
        printf("Enter coefficients",a,b and c);
        scanf("%if%if%if",&a,&b,&c);
        d=b*b-4*a*c;
        if(d>0)
            printf("real and distinct\n");
        else if(d==0)
            printf("real and different root\n");
        else(d<0)
        {

            printf("imaginary\n");
        }
        return 0;
    }


#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);
    if((year%4==0)&&(year%100!=0)||(year%400==0))
        printf("year is a leap year\n");
    else
        printf("year is not leap year\n");
        return 0;
}

 #include<stdio.h>
 int main()
 {
     int a,b,c;
     printf("Enter the number\n");
     scanf("%d%d%d\n",&a,&b,&c);
     if((a>b)&&(a>c))
        printf("%d is greatest",a);
     else if((b>a)&&(b>c))
        printf("%d is greatest",b);
     else
        printf("%d is greatest",c);
     return 0;

 }

   #include<stdio.h>
   int main()
   {
       int cp,sp;
       printf("Enter the cost price and selling price\n");
       scanf("%d%d"&cp,&sp);
       if(sp-cp>0)
        printf("profit\n");
       else
        printf("loss\n");
       return 0;
   }

    #include<stdio.h>
    int main()
    {
        int s1,s2,s3,s4,s5,total_marks,percentage;
        printf("Enter number of subject\n");
        scanf("%f%f%f%f%f\n",&s1,&s2,&s3,&s4,&s5);
        total_marks=s1+s2+s3+s4+s5;
        print("total marks is %f\n",total_marks);
        percentage=(total_marks/500)*100;
        printf("percentage is %f\n",percentage);
        if(percentage>33)
            printf("passed\n");
        else
            printf("failed");
        return 0;
    }

    #include<stdio.h>
    int main()
    {

        char ch;
        printf("Enter the alphabet\n");
        scanf("%d",ch);
        if((ch>A)&&(ch<Z))
            printf("uppercaes\n");
        else if((ch<a)&&(ch>z))
        printf("lowercase\n");
        return 0;
    }

    #include<stdio.h>
    int main()
    {
        int num;
        printf("Enter the number\n")
        scanf("%d\n",&num);
        if(num>0)
            printf("positive number\n");
        else if(num<0)
            printf("negative number\n");
        else
            printf("zero number\n");
        return 0;
    }

    #include<stdio.h>
    int main()
    {
        char ch;
        printf("Enter the alphabet\n");
        scanf("%c",&ch);
        if((ch>=65)&&(ch<=90))
            printf("Uppercase");
        else if((ch>=97)&&(ch<=122))
            printf("lowercase\n")
        else if((ch>=48)&&(ch<=57))
        printf("digit\n");
        else
            printf("special character\n");
        return 0;
    }

    #include<stdio.h>
    int main()
    {
        floata,b,c.flag=0;
        printf("Enter the value\n");
        scanf("%f%f%f",&a&b&c);
        if(a>b)
        {
            flag=((b+c)>a);
        }
        else if(b>c)
        {
            flag=((a+c)>b);
        }
        else
        {
            flag=((a+b)>c);
        }
           if(flag)
           {
               printf("valid triangle\n");

           }
           else
           {
               printf("invalid triangle");
           }
           return 0;
    }

    #include<stdio.h>
    int main()
    {
        int month,days;
        printf("Enter the month\n");
        scanf("%d\n",&month);
        if((month==1)||(month==3)||(month==5)||(month==5)||(month==7)||(month==9))
            printf("31 days\n");
        else if(month==2)
            printf("28/29days")
            else
            printf("30 days");
        return 0;
    }









    }



    }








    }


