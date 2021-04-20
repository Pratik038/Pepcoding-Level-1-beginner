#include<bits/stdc++.h>
using namespace std;
int main()
{	
	string s; cin>>s;
	string first="",second="";
	int c=1;
	for(int i=0;i<s.length()-1;i++){
		if(s[i]!=s[i+1]){
			first.push_back(s[i]);
			second.push_back(s[i]);
			if(c!=1){
				second += to_string(c);
			}
			c=1;
		}else{
			c++;
		}
	}
	first.push_back(s[s.length()-1]);
	second.push_back(s[s.length()-1]);
	if(c!=1){
		second += to_string(c);
	}
	cout<<first<<endl<<second;
}