#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=1;i<=n;i++)
        sum=sum+i;
    printf("%d\n",sum);
    return 0;
}

#include<stdio.h>
int amin()
{
    int i,sum=0;
    for(i=1;i<=10;i++)
        sum=sum+2*i;
    printf("%d",sum);
    return 0;
}

#include<stdio.h>
int main()
{

    int i,sum=0;
    for(i=1;i<=10;i++)
        sum=sum+(2*i+1);
    printf("%d",sum);
    return 0;
}

#include<stdio.h>
int main()
{

    int i,sum=0;
    for(i=1;i<=10;i++)
        sum=sum+(i*i);
    printf("%d\n",sum);
    return 0;
}

#include<stdio.h>
int main()
{
    int i,n,s=1,sum=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
        s=((n*(n+1)*(2*(n+1))))/6;
    sum=sum+s;
    printf("\n sum of %d is %d",n,sum);
    return 0;
}


#include<stdio.h>
int main()
{
    int i,n,cube=1,sum=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        cube=(((n*n)*((n+1)*(n+1)))/4;
        sum=sum+cube;
    }
    printf("\n sum of %d is %d",n,sum);
    return 0;
}
#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        fact=fact*i;
    }
    printf("\n factorial of %d is %d",n,fact);
    return 0;
}

#include<stdio.h>
int main()
{

    int n,count=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("Number of digit is %d",cout);
    return 0;
}

#include<stdio.h>
int main()
{
    int f=0,i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
        printf("prime");
    else
        printf("not prime");
    return 0;
    }

    #include<stdio.h>
    int main()
    {
        int x,y,i flag=0;
        printf("Enter two number\n");
        scanf("%d%d",&x,&y);
        for(i=1;i<x*y;i++)
        {
            if((i%x=0)&&(i%y==0))
            {
                printf("LCM of %d and %d is %d",x,y,i);
                break;
            }
            }
            return 0;
        }

    #include<stdio.h>
    int main()
    {
        int n,rem=0;
        rev=0;
        printf("Enter a number \n");
        scanf("%d",&n);
        while(n!=0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
        printf("Reverse number is %d",rev);
        return 0;
        }

