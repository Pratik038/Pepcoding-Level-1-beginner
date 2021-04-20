#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int d,b; cin>>d>>b;
	int ans = 0;
	int p=1;
	while(d){
		int rem = d%10;
		ans += rem*p;
		d/=10;
		p*=b;
	}
	cout<<ans;
}