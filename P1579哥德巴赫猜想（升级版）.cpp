#include<cstdio>
#include<stdlib.h>
#include<math.h>

int  n,b[20002],k,i,j;

int main()
{
	scanf("%d",&n);
	for(i=2;i<=20000;i++)
	{
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
				break;
			if(i>sqrt(i))
			{
				b[k]=i;
				k++;
			}
		}
	}
	for(i=1;i<=k-1;i++)
	{
		for(j=1;j<=k-1;j++)
		{
			for(int t=k-1;t>=0;t--)
			{
				if(b[i]+b[j]+b[t]==n)
				{
					printf("%d %d %d",b[i],b[j],b[t]);
					return 0;
				}
			}
		}
	}
	return 0;
}
