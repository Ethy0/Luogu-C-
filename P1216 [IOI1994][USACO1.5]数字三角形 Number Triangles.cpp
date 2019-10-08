#include<cstdio>
#include<cstdlib>
#include<bits/stdc++.h>
#define fp(i,l,r) for(register int i=(l);i<=(r);i++)
#define fd(i,r,l) for(register int i=(r);i>=(l);i--)
using namespace std;
int r,f[1111][1111];
int z[1111][1111];
int result;
int s(int a,int b){
	if(z[a][b]!=-1) return z[a][b];
	return z[a][b]=max(s(a+1,b),s(a+1,b+1))+f[a][b];
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    scanf("%d",&r);
     fp(i,1,r){
        fp(j,1,i){
            scanf("%d",&f[i][j]);
            z[i][j]=-1;
        }
    }
	printf("%d",s(1,1));
}
