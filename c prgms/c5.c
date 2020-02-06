#include<stdio.h>
int main()
{
	int n,start=1;
	scanf("%d",&n);
	while(start<=n)
	{
		if(n%start==0)
		{
			printf("%d",start);
		}
		start=start + 1;
	}
	return 0;
}
