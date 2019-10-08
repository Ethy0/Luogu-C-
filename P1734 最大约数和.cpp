#include<cstdio>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;
int dp[9999][9999];
int a[9999];
int n;
void dd(){
    for (int i=1;i<=n;i++)
    	for (int j=i*2;j<=n;j+=i)
			a[j]+=i;
}
int main(){
	scanf("%d",&n);
	dd();
	int w[1111],v[1111];
	for(int i=1;i<=1000;i++)
    {
        w[i]=i;
    }
    for(int i=1;i<=1000;i++)
    {
        v[i]=a[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            dp[i][j]=dp[i][j-1];
            if (i>=w[j])
				dp[i][j]=max(dp[i][j],dp[i-w[j]][j-1]+v[j]);
        }
    }
    printf("%d",dp[n][n]);
	return 0;
}
