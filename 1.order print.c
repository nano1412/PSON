#include <stdio.h>

int main()
{
	int b,i=0,a[5];

	for(b=0;b<=4;b++)
	{
		printf("num%d=",b+1);
		scanf("%d",&a[b]);
	}
	while(i<=4)
	{
		printf("%d\n",a[i]);
		i++;
	}
}
