#include<stdio.h>
int main()
{
	int r,large=0,small=9;
	long x;
	scanf("%ld",&x);
	while(x!=0)
	{
		r = x % 10;
		if(x>large){
			large = r;
		}
		if(r<small){
			small = r;
		}
		x /= 10;
	}
	printf("<%d,%d>",small,large);
	return 0;
}
