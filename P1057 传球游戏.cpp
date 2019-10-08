#include<bits/stdc++.h>
using namespace std;
int f[2222][2222];
int n,m,a,b;
int main(){
    scanf("%d %d",&n,&m);
    f[0][1]=1;
    for (int i=1;i<=m;i++){
        for (int j=1;j<=n;j++) {
            a=j-1;
            b=j+1;
            if (a==0) 
				a=n;
            if (b==n+1)
				b=1;
            f[i][j]=f[i-1][a]+f[i-1][b];
        }
    }
    printf("%d\n", f[m][1]);
    return 0;
}
