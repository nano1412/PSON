#include <stdio.h>
#include <ctype.h>
float iWant5 ();


int main()
{
//1
    /*char a[1000],b;
    int i,x,c,sum=0;

    printf("Add upper letter word:");
    gets(a);

    x=strlen(a);
    for(i=0;i<x;i++)
    {
        c=islower(a[i]);
        if(c!=0)
        {
            sum=sum+1;
        }
    }

    if(sum==0)
    {
        for(i=0;i<x;i++)
        {


            if(i%2==0)
            {
                b=tolower(a[i]);
                printf("%c",b);
            }
            else
            {
                printf("%c",a[i]);
            }
        }
    }
    else
    {
        printf("upper case pls");
    }*/

//2
    float c,i,sum;
    int a;

    printf("Enter Num");
    scanf("%d",&a);

    if(a%5!=0)
    {
    printf("No");
    }
    else
    c=a/5;
    for(i=c;i>=1;i--)
    {
        sum=iWant5(i);
        printf("%.0f\n",sum);
    }


    return 0;
}

float iWant5(float c)
{
    return(c*5);
}
