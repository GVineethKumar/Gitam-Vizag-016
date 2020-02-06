#include<stdio.h>
int main()
{
	int r,s=0;
	long x;
	scanf("%ld",&x);
	while(x!=0)
	{
		r = x % 10;
		if(r % 2 == 0)
		{
			s = s+r;
		}
		x /= 10;
	}
	printf("%d",s);
	return 0;
}
