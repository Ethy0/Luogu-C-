#include<bits/stdc++.h>
#define inf 999
using namespace std;
int n,t;
int a[inf]={0},b[inf]={0},c[inf]={0},d[inf]={0};
void print(){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return;
}
void dfs(int step){
	if(step==n+1){
		if(t<3)
			print();
		++t;
		return;
	}
	else{
		for(int i=1;i<=n;i++){
			if((!b[i])&&(!c[step+i])&&(!d[step-i+n-1])){
				a[step]=i;
				b[i]=1;
				c[step+i]=1;
				d[step-i+n-1]=1;
				dfs(step+1);
				b[i]=0;
				c[step+i]=0;
				d[step-i+n-1]=0;
			}
		}
	}
}
int main(){
	cin>>n;
	dfs(1);
	cout<<t<<endl;
	return 0;
}
