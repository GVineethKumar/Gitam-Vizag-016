#include<stdio.h>
int isPalindrome(int x)
{
	int rev=0,buffer = x;
	while(x!=0){
		rev = rev*10 + (x%10);
		x /= 10;
	}
	if(rev == buffer){
		return 1;
	}
	else{
		return 0;
	}
}
int main()
{
	int x1,x2,a,cnt=0,i;
	scanf("%d%d",&x1,&x2);
	for(i=x1;i<=x2;i++)
	{
		if(i%2==0)
		{
		 a = isPalindrome(i);
		 if(a == 1)
		 {
		 	printf("%d",i);
			cnt++;
		 }
	   }
	}
	printf("\n%d",cnt);
	return 0;
}
