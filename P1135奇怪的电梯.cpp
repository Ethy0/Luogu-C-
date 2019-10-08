#include<cstdio>
#include<cstdlib>
#include<queue>

using namespace std;

int n,a,b;
int k[222];
int v[222]={0};
int up,down;
int e,e1,e2;
int d[222];
queue<int> q;
int main(){
	scanf("%d %d %d",&n,&a,&b);
	for(int i=1;i<=n;i++){
		scanf("%d",&k[i]);
	}
	q.push(a);
	d[a]={0};
	while(!q.empty()){
		e1=e2=q.front();
	
		q.pop();
		if(e1==b)
			break;
		up=e1+k[e1];
		if(v[up]==0&&up<=n){
			q.push(up);
			v[up]=1;
			d[up]=d[e1]+1;
		}
		down=e2-k[e2];
		if(v[down]==0&&down>=1){
			q.push(down);
			v[down]=1;
			d[down]=d[e1]+1;
		}
	}
	if(e1==b||e2==b)
		printf("%d",d[b]);
	else
		printf("-1");
	return 0;
}
