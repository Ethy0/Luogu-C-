#include<cstdio>
#include<stdlib.h>

int  a[100010],n;
void quicksort(int l,int r)
{
	if(l<r)
	{
		int s=l,t=r;
		int key=a[l];
		while(s<t)
		{
			while(s<t&&a[t]>=key)
				--t;
			if(s<t)
				a[s++]=a[t];
			while(s<t&&a[s]<=key)
				++s;
			if(s<t)
				a[t--]=a[s];
		}
		a[s]=key;
		quicksort(l,s-1);
		quicksort(s+1,r);
	}
}

int main()
{
	scanf("%d",&n);
	for(int w=0;w<n;w++)
		scanf("%d",a[w]);
	return 0;
}
