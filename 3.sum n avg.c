#include <stdio.h>

int main()
{
int a,c=0,e=0;
int score[5] = {0,0,0,0,0};

    for(a=0;a<=4;a++)
    {
        printf("Num%d:",a+1);
        scanf("%d",&score[a]);
        
    }
    while(e<=4)
    {
        c=c+score[e];
        e++;
        
    }
    printf("sum=%d\n",c);
    printf("averange=%d",c/5);
}
