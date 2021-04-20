#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int n,b1,b2; cin>>n>>b1>>b2;
	int ans = 0;
	int p=1;
	while(n){
		int rem = n%10;
		ans += rem*p;
		n/=10;
		p*=b1;
	}
	int res=0;
	p=1;
	while(ans){
		int rem = ans%b2;
		res += rem*p;
		ans/=b2;
		p*=10;
	}
	cout<<res;
}