#include<bits/stdc++.h>
#define ll long long 
using namespace std;
ll b,p,k;
ll work(ll m){
	if(m==0){
		return 1;
	}
	ll a=work(m>>1)%k;
	a=(a*a)%k;
	if(m&1){
		a=(b%k*a)%k;
	}
	return a;
}
int main(){
	cin>>b>>p>>k;
	cout<<b<<"^"<<p<<" mod "<<k<<"="<<work(p)<<endl;
	return 0;
}
