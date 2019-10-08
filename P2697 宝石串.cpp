#include<bits/stdc++.h>
using namespace std;
char s[1000005];
int ans,l;
void dfs(int faq,int num,int anss){
    if(num>l) 
		return;
    if(faq==0)
        if(anss>ans) 
			ans=anss;
    if(s[num]=='R')
        dfs(faq-1,num+1,anss+1);
    else 
		dfs(faq+1,num+1,anss+1);
    return;
}
int main() {
    gets(s);
    l=strlen(s);
    for(int i=0;i<l-ans;i++)
    	dfs(0,i,0);
    printf("%d\n",ans);
    return 0;
}
