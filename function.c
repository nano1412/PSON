#include <stdio.h>
#include <ctype.h>
#include <string.h>

//1)
/*//1
void tri1()
{
    float h1;
    float b1;

    printf("Height:");
    scanf("%f",&h1);
    printf("Base:");
    scanf("%f",&b1);
    printf("triangle area is %.2f",h1*b1/2);
}

//2
float tri2()
{
    float b3,h3,a;

    printf("Height:");
    scanf("%f",&h3);
    printf("Base:");
    scanf("%f",&b3);
    a=b3*h3/2;

    return(a);
}

//3
float tri3(float h3,float b3)
{
    printf("triangle area is %.2f",h3*b3/2);
}

//4
float tri4(float h4,float b4)
{
    return(h4*b4/2); //3 summit back to main
}

int main()
{
//1
    tri1();

//2
    float A;
    A=tri2();
    printf("triangle area is %.2f",A);

//3
    float h3,b3;
    printf("Height:");
    scanf("%f",&h3);
    printf("Base:");
    scanf("%f",&b3);

    tri2(h3,b3);

//4
    float b4,h4,sum;

    printf("Height:");
    scanf("%f",&h4);
    printf("Base:");
    scanf("%f",&b4);

    sum=tri4(h4,b4);

    printf("triangle area is %.2f",sum);

    return 0;
}*/

//2)
/*int Action()
{
    printf("1.John Wick chapter 69 \n2.Avengers:Start Game \n3.Bambo");
}
int Anime()
{
    printf("1.Our name \n2.loud voice \n3.boku no puku");
}
int Romantic()
{
    printf("1.titanium \n2.johnny english 069 \n3.fifty shades of grey");
}




int main()
{
    int a;

    printf("Welcome To PCSHSM Cineplex\n---------------------------\n1.Action 2.Anime 3.Romantic\n");
    printf("\nplease select your category:");
    scanf("%d",&a);

    switch(a)
    {
        case 1:Action(); break;
        case 2:Anime(); break;
        case 3:Romantic(); break;
        default:printf("Sorry we don't have that category.");
    }

    return 0;
}*/

//3)
/*int Addition(int a,int b)
{
    printf("%d",a+b);
}

int Difference(int a,int b)
{
    printf("%d",a-b);
}

int Multiply(int a,int b)
{
    printf("%d",a*b);
}

int Division(int a,int b)
{
    printf("%d",a/b);
}

int main()
{
    int a,b,c;

    printf("Number1:");
    scanf("%d",&a);
    printf("Number2:");
    scanf("%d",&b);

    printf("Menu\n----\n1.Addition +\n2.Difference -\n3.Multiply x\n4.Division /");
    printf("\nPlease select:");
    scanf("%d",&c);

    switch(c)
    {
        case 1:Addition(a,b); break;

        case 2:Difference(a,b); break;

        case 3:Multiply(a,b); break;

        case 4:Division(a,b); break;

        default: printf("nope");
    }

}*/

//4)
/*int main()
{
    char a[1000],b;
    int i,x;

    printf("Add lower letter word:");
    gets(a);

    x=strlen(a);

    for(i=0;i<x;i++)
    {
        b=toupper(a[i]);

        if(islower(a[i])==0)
        {
            printf("lower case pls");
            break;
        }
        else
        {
            printf("%c",b);
        }
    }



    return 0;
}*/



