#include<bits/stdc++.h>
using namespace std;
int n,k,f[11111111]={1};
int main()
{
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++){
		for(int x=1;x<=k&&i-x>=0;x++){
			f[i]+=f[i-x];
		}
		f[i]%=100003;
	}
	printf("%d",f[n]);
	return 0;
}
