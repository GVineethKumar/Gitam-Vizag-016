#include<stdio.h>
int main()
{
	int r,rev=0;
	long x,buffer;
	scanf("%ld",&x);
	buffer = x;
	while(x!=0){
		r = x % 10;
		rev = rev * 10 + r;
		x /= 10;
	}
	if(rev == buffer){
		printf("yes");
	}
	else{
		printf("no");
	}
}
