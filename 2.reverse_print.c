#include <stdio.h>

int main()
{
    int a,i=4,b[5];

    for(a=0;a<=4;a++)
    {
        printf("num%d=",a+1);
        scanf("%d",&b[a]);
    }

    for(i;i>=0;i--)
    {
        printf("%d\n",b[i]);
    }
}
