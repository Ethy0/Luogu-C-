#include<cstdio>
#include<cstdlib>

using namespace std;

int N,M,T,zx,zy,sx,sy,fx,fy,a[100][100],total;
int dx[]{-1,0,1,0};
int dy[]{0,1,0,-1};
int map[100][100];
void dfs(int x,int y){
	if(x==fx&&y==fy){
		total++;
		return;
	}
	else{
		for(int i=0;i<4;i++){
			if(a[x+dx[i]][y+dy[i]]==0&&x+dx[i]>0&&map[x+dx[i]][y+dy[i]]==1&&x+dy[i]>0&&y+dy>0){
				a[x][y]=1;
				dfs(x+dx[i],y+dy[i]);
				a[x][y]=0;
			}
		}
	}
}
int main(){
	scanf("%d %d %d",&N,&M,&T);
	scanf("%d %d %d %d",&sx,&sy,&fx,&fy);
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			map[i][j]=1;
		}
	}
	for(int i=1;i<=T;i++){
		scanf("%d %d",&zx,&zy);
		map[zx][zy]=0;
	}
	dfs(sx,sy);
	printf("%d",total);
	return 0;
}
