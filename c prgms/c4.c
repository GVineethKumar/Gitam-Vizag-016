#include<stdio.h>
int main()
{
	int r,large=0,cnt=0;
	long x;
	scanf("%ld",&x);
	while(cnt!=3)
	{
		r = x % 10;
		if(r>large)
		{
			large = r;
		}
		x = x/10;
	}
	cnt++;
	printf("%d",large);
	return 0;
}
