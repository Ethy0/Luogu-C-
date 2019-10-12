/*P1478 ÌÕÌÕÕªÆ»¹û£¨Éý¼¶°æ£©*/
#include<cstdio>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int a,b,t,x[5010],y[5010];
long long n,s;

int main()
{
	scanf("%lld %lld",&n,&s);
	scanf("%d %d",&a,&b);
	a+=b;
	for(int i=1;i<=n;i++)
	{
		scanf("%d %d",&x[i],&y[i]);
	}
	for(int i=1;i<n;i++)
	{
        for(int j=i+1;j<=n;j++)
		{
            if(y[i]>y[j])
			{
                swap(y[i],y[j]);
                swap(x[i],x[j]);
            }
        }
	}
	for(int i=1;i<=n;i++)
	{
		if(a>=x[i]&&s>=y[i])
		{
			t++;
			s-=y[i];
		}
	}
	printf("%d",t);
	return 0;
}
