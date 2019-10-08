#include<cstdio>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;
int n,m,k,r;
int a[11],w[11],c[11],f[999]={0},tl,st=0;
int main(){
	scanf("%d %d %d %d",&n,&m,&k,&r);
	for(int i=1;i<=n;i++)
		scanf("%d ",&a[i]);
	sort(a+1,a+n+1);
	for(int i=1;i<=m;i++){
        scanf("%d ",&w[i]);
    }
    for(int i=1;i<=m;i++){
        scanf("%d ",&c[i]);
    }
    for(int i=1;i<=m;i++){
    	for(int j=r;j>=w[i];j--){
    		f[j]=max(f[j],f[j-w[i]]+c[i]);
		}
	}
	for(int i=1;i<=r;i++){
		if(f[i]>=k){
			tl=r-i;
			break;
		}
	}
	for(int i=1;i<=n;i++){
		tl-=a[i];
		if(tl<=0)
			break;
		st++;
	}
	printf("%d",st);
	return 0;
}
