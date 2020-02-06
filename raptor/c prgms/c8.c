#include<stdio.h>
int reverse(int a)
{
	int rev=0;
	while(a!=0)
	{
		rev = rev * 10 + (a%10);
		a=a/10;
	}
	return rev;
}
int isPrime(int x)
{
	int start = 1,flag=0;
	/*while(start<=x)
	{
		if(x%start==0)
		{
			flag = 1;
			break;
		}
		start++;
	} */
	for(x=2,)
	if(flag==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int r,rev=0;
	long x,buffer;
	scanf("%ld",&x);
	buffer = reverse(x);
	if(isPrime(x) && isPrime(buffer))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}

