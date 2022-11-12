#include <stdio.h>
#include <string.h>

int main()
{
    printf("HI\n");

//1
    /*char name[100];
    int x;

    printf("Name:",name);
    gets(name);
    printf("Hello! %s",name);

    x=strlen(name);
    printf("\nYour name has 14 characters ",x);*/

//2
    /*char s1[100],s2[100];

    printf("s1:");
    gets(s1);
    strcpy(s2,s1);
    printf("\ns1:%s",s1);
    printf("\ns2:%s",s2);*/

//3
    /*char s1[100],s2[100];

    printf("s1:");
    gets(s1);
    printf("s2:");
    gets(s2);

    strcat(s1,s2);

    printf("s1:%s",s1);*/

//4
    /*char s1[100],s2[100];
    int x;

    printf("s1:");
    gets(s1);
    printf("s2:");
    gets(s2);

    x=strcmp(s1,s2);

    if(x==0)
    {
        printf("\nsimilar string");
    }
    else if (x<0)
    {
        printf("\n%s",s1);
        printf("\n%s",s2);
    }
    else
    {
        printf("\n%s",s2);
        printf("\n%s",s1);
    }*/

    return 0;
}
