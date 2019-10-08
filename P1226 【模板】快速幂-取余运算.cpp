#include<bits/stdc++.h>
using namespace std;
long long b,p,k;
long long mod(int p){
	if(p==0)
		return 1;
	long long tmp=mod(p/2)%k;
	tmp=(tmp*tmp)%k;
	if(p%2==1)
		tmp=(b%k*tmp)%k;
	return tmp;
}
int main(){
	cin>>b>>p>>k;
	if(b==1&&p==0&&k==1){
		cout<<"1^0 mod 1=0";
		return 0;
	}
	long long tb=b;
	b=b%k;
	cout<<tb<<"^"<<p<<" mod "<<k<<"="<<mod(p);
	return 0;
}
