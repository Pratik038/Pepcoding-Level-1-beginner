#include<bits/stdc++.h>
using namespace std;
int isPrime(int n){
	if(n<1)
		return false;
	for(int i=2;i*i<=n;i++){
		if(n%i==0)
			return false;
	}
	return true;
}
int main()
{	
	int n; cin>>n;
	vector<int> v;
	int i=n;
	while(i--){
		int x; cin>>x;
		v.push_back(x);
		if(isPrime(x))
			v.pop_back();
	}
	cout<<"[";
	for(i=0;i<v.size()-1;i++)
		cout<<v[i]<<", ";
	if(v.size()!=0)
	cout<<v[i]<<"]";
}