#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
const int maxn=10000+10;
int v[maxn],f[maxn];
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    f[0]=1;
    for(int i=1;i<=n;++i)    
        cin>>v[i];
    for(int i=1;i<=n;++i)
    {
        for(int j=m;j>=v[i];--j)
            f[j]+=f[j-v[i]];
	}
    cout<<f[m]<<endl;
    return 0;
}
