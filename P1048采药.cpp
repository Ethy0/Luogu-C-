#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<string.h>

using namespace std;
/*
int T,M;
int t[2000],m[2000];
int emmm[1000][1000];
int dfs(int a,int b){
	if(emmm[a][b]!=-1)
		return emmm[a][b];
	if(a>M)
		return emmm[a][b]=0;
	int x,y;
	x=dfs(a+1,b);
	if(b>t[a])
		y=dfs(a+1,b-t[a])+m[a];
	return emmm[a][b]=max(x,y);
}
int main(){
	scanf("%d %d",&T,&M);
	for(int i=1;i<=M;i++){
		scanf("%d %d",&t[i],&m[i]);
	}
	memset(emmm,-1,sizeof(emmm));
	printf("%d",dfs(1,T));
	return 0;
}
*/
int w[105], val[105];
int dp[1005];
int main()
{
    int t,m,res=-1;    
    scanf("%d%d",&t,&m);
    for(int i=1;i<=m;i++)
    {
        scanf("%d%d",&w[i],&val[i]);
    }
    for(int i=1;i<=m;i++) 
    {
        for(int j=t;j>=0;j--) 
        {
            if(j>=w[i])
            {
                dp[j]=max(dp[j-w[i]]+val[i], dp[j]);
            }
        }
    }    
    printf("%d",dp[t]);
    return 0;
}
