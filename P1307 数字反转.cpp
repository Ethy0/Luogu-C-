#include<cstdio>
#include<stdlib.h>

int  n,k,f;

int main()
{
	scanf("%d",&n);
	if(n<0)
	{
		printf("-");
		n=-n; 
	}
	while(n!=0)
	{
		k=n%10;
		f=f*10+k;
		n=n/10;
	}
	printf("%d",f);
	return 0;
} 
