#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("HI!\n");
//1 Array 2D Basic
    /*int a[2][2]={2,6,7,9};
    int i,j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("a[%d][%d]=%d ",i,j,a[i][j]);

        }
    }*/

//2 array 2D
    /*int a[1000][1000],b,c,i,j,x,y,m=0;
    float n;
    printf("row:");
    scanf("%d",&b);
    printf("column:");
    scanf("%d",&c);

    for(x=0;x<b;x++)
    {
        for(y=0;y<c;y++)
        {
            printf("Enter Number");
            scanf("%d",&a[x][y]);
        }
    }

    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d]=%d ",i,j,a[i][j]);
            m=m+a[i][j];
        }
        printf("\n");
    }
    printf("\nsum:%d",m);
    n=m/(i*j);
    printf("\naverage:%.2f",n);*/


//3
    /*int a[1000][1000],b,c,i,j,x,y;

    printf("row:");
    scanf("%d",&b);
    printf("column:");
    scanf("%d",&c);

    for(x=0;x<b;x++)
    {
        for(y=0;y<c;y++)
        {
            printf("Enter Number");
            scanf("%d",&a[x][y]);
        }
    }

    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }*/

//4 F
    /*int a[1000][1000],b,c,i,j,x,y;

    printf("row:");
    scanf("%d",&b);
    printf("column:");
    scanf("%d",&c);

    for(x=0;x<c;x++)
    {
        for(y=0;y<b;y++)
        {
            printf("Enter Number");
            scanf("%d",&a[x][y]);
        }
    }

    for(j=0;j<c;j++)
    {
        for(i=0;i<b;i++)
        {
            printf("%4d ",a[i][j]);
        }
        printf("\n");
    }*/

//5
    /*int a[2][2],i,j,x,y,m;
    float n;

    for(x=0;x<2;x++)
    {
        for(y=0;y<2;y++)
        {
            printf("Enter Number");
            scanf("%d",&a[x][y]);
        }
    }
    i=a[0][0]*a[1][1];
    j=a[0][1]*a[1][0];
    m=i-j;
    printf("The determenant of A is %d",m);*/

//6
    /*int a[2][2],b[2][2],x,y,m,n,c,d,e,f;

    printf("Matrix A\n");
    for(x=0;x<2;x++)
    {
        for(y=0;y<2;y++)
        {
            printf("Enter Number[%d][%d]:",x,y);
            scanf("%d",&a[x][y]);
        }
    }

    printf("Matrix B\n");
    for(x=0;x<2;x++)
    {
        for(y=0;y<2;y++)
        {
            printf("Enter Number[%d][%d]:",x,y);
            scanf("%d",&b[x][y]);
        }
    }
    c=(a[0][0]*b[0][0])+(a[0][1]*b[1][0]);
    d=(a[1][0]*b[0][0])+(a[1][1]*b[1][0]);
    e=(a[0][0]*b[0][1])+(a[0][1]*b[1][1]);
    f=(a[1][0]*b[0][1])+(a[1][1]*b[1][1]);
    //printf("%d",a[])
    printf("%d %d\n%d %d",c,e,d,f);*/






    return 0;
}
