#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct node{
    int w,l;
}a[5010];
int f[5010];
bool cmp(node a,node b){
    if(a.l==b.l)
        return a.w<b.w;
    return a.l<b.l; 
}
int main(int argc, char** argv) {
    int n;scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d%d",&a[i].l,&a[i].w);
        f[i]=1;
    }
    sort(a+1,a+n+1,cmp);
    int ans=-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            if(a[i].l>a[j].l&&a[i].w<a[j].w){
                f[i]=max(f[i],f[j]+1);
            }
        }
        ans=max(ans,f[i]);
    }
    printf("%d\n",ans);
    return 0;
}
