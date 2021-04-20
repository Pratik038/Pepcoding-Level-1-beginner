#include<bits/stdc++.h>
using namespace std;
int main()
{	
	string s; cin>>s;
	string st="";
	for(int i=1;i<s.length();i++){
		st += s[i-1];
		st += to_string(s[i]-s[i-1]);
	}
	cout<<st+s[s.length()-1];
}