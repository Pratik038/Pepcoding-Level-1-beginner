#include<bits/stdc++.h>
using namespace std;
int main()
{	
	string s; cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]>='a' and s[i]<='z')
			s[i] = s[i] - 'a' + 'A';
		else
			s[i] = s[i] - 'A' + 'a';
	}
	cout<<s;
}