#include <stdio.h>

int main()
{
    printf("Hi\n");

//1
    /*int b,i=0,a[5];

    for(b=0;b<=4;b++)
    {
        printf("num%d=",b+1);
        scanf("%d",&a[b]);
    }

    while(i<=4)
    {
        printf("%d\n",a[i]);
        i++;
    }*/

//2
    /*int b,i=4,a[5];

    for(b=0;b<=4;b++)
    {
        printf("num%d=",b+1);
        scanf("%d",&a[b]);
    }

    for(i;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }*/

//3
    /*int b[5],a,c,d;

    for(a=0;a<=4;a++)
    {
        printf("Num%d:",a+1);
        scanf("%d",&b[a]);
    }
    c=b[1]+b[2]+b[3]+b[4]+b[0];
    d=(b[1]+b[2]+b[3]+b[4]+b[0])/5;
    printf("sum=%d\n",c);
    printf("averange=%d",d);*/

//4
    /*int num1[5],a,b=0;

    for(a=0;a<=4;a++)
    {
        printf("Num%d:",a+1);
        scanf("%d",&num1[a]);

        if(num1[a]%2==0)
        {
            b=b+num1[a];
        }
    }
    printf("sum of even=%d",b);*/

//5
    /*int num2[5],a,b=0;

    for(a=0;a<=4;a++)
    {
        printf("Num%d:",a+1);
        scanf("%d",&num2[a]);

        if(num2[a]%2==1)
        {
            b=b+num2[a];
        }
    }
    printf("sum of even=%d",b);*/


    return 0;
}
