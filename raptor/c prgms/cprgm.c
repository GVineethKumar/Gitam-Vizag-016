#include<stdio.h>
int main()
{
	int x,i;
	scanf("%d",&x);
	while(x!= 0)
	{
		i = x % 10;
		printf("%d\t",i);
		x = x / 10;
	}
	return 0;
}

