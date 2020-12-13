#include<bits/stdc++.h>
using namespace std;
int v,n;
long long f[99999];
long money[999999];
int main()
{
	scanf("%lld %lld",&v,&n);
	for(int i=1;i<=v;i++)
		scanf("%lld",&money[i]);
	f[0]=1;
	for(int i=1;i<=v;i++){
		for(int j=money[i];j<=n;j++)
			f[j]=f[j]+f[j-money[i]];
	}
	printf("%lld",f[n]);
}
