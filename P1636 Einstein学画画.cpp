#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

int n,m,dg[1010],a,b,num=0;
bool map[1010][1010];
long long read()
{
    long long ans=0;
    char ch=getchar(),last=' ';
    while(ch<'0'||ch>'9')
    {last=ch;ch=getchar();}
    while(ch>='0'&&ch<='9')
    {ans=ans*10+ch-'0';ch=getchar();}
    if(last=='-')ans=-ans;
    return ans;
}
void add(int x,int y)
{
    dg[x]++;dg[y]++;
    map[x][y]=map[y][x]=true;
}
int main()
{
    n=read();m=read();
    for(int i=1;i<=m;i++)
    {
        a=read();b=read();
        add(a,b);
    }
    for(int i=1;i<=n;i++)
        if(dg[i]&1==1)num++;
    if(num==0||num==2)cout<<"1";
    else cout<<num/2;
    return 0;
}
