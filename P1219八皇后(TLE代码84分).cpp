#include<cstdio>
#include<cstdlib>

using namespace std;

int N,a[130][130],T=0;
int p(){
	if(T<=2){
		for(int i=1;i<=N;i++){
			for(int k=1;k<=N;k++){
				if(a[i][k]==1)
					printf("%d ",k);
			}
		}
		printf("\n");
	}
}
bool j(int x,int y){
	for(int k=1;k<=N;k++){
		if(a[x][k]==0)
			continue;
		else
			return false;
	}
	for(int k=1;k<=N;k++){
		if(a[k][y]==0)
			continue;
		else
			return false;
	}
	for(int k=1;k<=N;k++){
		if(x-k>0&&y-k>0){
			if(a[x-k][y-k]==0)
				continue;
			else
				return false;
		}
	}
	for(int k=1;k<=N;k++){
		if(x-k>0&&y+k<=N){
			if(a[x-k][y+k]==0)
				continue;
			else
				return false;
		}
	}
	return true;
}
int dfs(int step){
	if(step>N){
		p();
		T++;
		return 0;
	}
	else{
		for(int i=1;i<=N;i++){
			if(j(step,i)==true){
				a[step][i]=1;
				dfs(step+1);
				a[step][i]=0;
			}
		}
	}
}
int main(){
	scanf("%d",&N);
	dfs(1);
	printf("%d",T);
	return 0;
}
