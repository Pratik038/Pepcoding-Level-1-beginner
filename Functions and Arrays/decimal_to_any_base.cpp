#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int d,b; cin>>d>>b;
	int ans = 0;
	int p=1;
	while(d){
		int rem = d%b;
		ans += rem*p;
		d/=b;
		p*=10;
	}
	cout<<ans;
}