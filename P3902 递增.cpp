#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
long long N;
int t[1111];
long long sum,now,number;
int main()
{
	cin>>N;
	for(long long i=1;i<=N;i++){
		cin>>number;
		if(number>t[now])
		{
			t[++now]=number;
		}
		else
		{
			*lower_bound(t+1,t+now+1,number)=number;
			sum++;
		}
	}
	cout<<sum<<endl;
	return 0;
}
