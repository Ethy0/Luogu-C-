#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int n,m,k;
string a[20001];
int f[20001];
int two(string x,int head,int last) ;
void un(int x,int y) ;
int find(int x) ;
int main()
{
    cin>>n>>m;
    for( int i=1;i<=n;i++){
        cin >> a[i] ;
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++) 
		f[i]=i;
    string x,y;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        int c=two(x,1,n),d=two(y,1,n);
        if(c==-1||d==-1) 
			continue;
        int r1=find(c);
        int r2=find(d);
        if(r1!=r2)
			un(r1,r2);
    } 
    cin>>k;
    for(int i=1;i<=k;i++)
    {
        cin>>x>>y;
        int c=two(x,1,n),d=two(y,1,n);
        if(c==-1||d==-1){
            cout << "No.";
            continue;
        }
        if(find(c)==find(d))
			cout<<"Yes.";
        else 
			cout<<"No.";
        cout<<endl;
    }
    return 0;
} 

int two(string x,int head,int last){
    if(head>last)
		return -1;
    int g=(last+head)/2;
    if(a[g]==x)
		return g;
    if(a[g]>x)
		return two(x,head,g-1);
    else 
		return two(x,g+1,last);
}

void un(int x,int y){
    f[x]=y;
    return;
}

int find(int x)
{
    if(f[x]!=x)
		f[x]=find(f[x]);
    return f[x];
}
