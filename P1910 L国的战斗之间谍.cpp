#include<cstdio>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;
int n,m,x;
//int result;
int a,b,c;
int f[1111][1111];
/*
struct z{
	int a;
	int b;
	int c;
}ssr[111];
void dfs(int person,int file,int rubbish,int salary){
	if(rubbish>m||salary>x)
		return;
	if(person>n){
		result=max(result,file);
		return;
	}
	dfs(person+1,file+ssr[person].a,rubbish+ssr[person].b,salary+ssr[person].c);
	dfs(person+1,file,rubbish,salary);
}
*/
int main()
{
	scanf("%d %d %d",&n,&m,&x);
	/*
	for(int i=1;i<n;i++){
		scanf("%d %d %d",&ssr[i].a,&ssr[i].b,&ssr[i].c);
	}
	dfs(1,0,0,0);
	printf("%d\n",result);
	*/
	for(int i=1;i<=n;i++){
		scanf("%d %d %d",&a,&b,&c);
		for(int j=m;j>=b;j--){
			for(int k=x;k>=c;k--){
				f[j][k]=max(f[j][k],f[j-b][k-c]+a);
			}
		}
	}
	printf("%d\n",f[m][x]);
	return 0;
}
