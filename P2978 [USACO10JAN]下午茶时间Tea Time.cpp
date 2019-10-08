#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int n,m,fa[10005],k;
int find(int x){
    if(fa[x]!=x){
    return  fa[x]=find(fa[x]);
    }
    else 
    	return x;
}
void he(int x,int y){
    fa[find(x)]=find(y);
}
int main() 
{         
    cin>>n>>m>>k;
    for(int t=1;t<=n;t++){
        fa[t]=t;
    }
    for(int t=1;t<=m;t++){
        int w,e;
        cin>>w>>e;
        he(w,e);
    } 
    for(int i=1;i<=k;i++){
        int q,w;
        cin>>q>>w;
        if(find(q)==find(w))
        cout<<"Y"<<endl;
        else
        cout<<"N"<<endl;
    }
    return 0;
}
