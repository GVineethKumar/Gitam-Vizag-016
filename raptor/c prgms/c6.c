#include<stdio.h>
int main()
{
	int r,s=0;
	long x;
	scanf("%ld",&x);
	while(x!=0){
		r = x % 10;
		if(r == 8){
			s += 2;
		}
		else if(r == 0 || r == 4 || r == 6 || r == 9)
		{
			s += 1;
		}
		x = x/10;
	}
	printf("%d ",s);
	return 0;
}
