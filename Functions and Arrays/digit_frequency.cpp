#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int n,d; cin>>n>>d;
	int c=0;
	while(n){
		if(n%10==d)
			c++;
		n/=10;
	}
	cout<<c;
}