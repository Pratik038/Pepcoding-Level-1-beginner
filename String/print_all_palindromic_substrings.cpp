#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
	int i=0,j=s.length()-1;
	while(i<=j){
		if(s[i]!=s[j])
			return false;
		else{
			i++;
			j--;
		}
	}
	return true;
}
int main(){
    string s; cin>>s;
    for(int i=0;i<s.length();i++){
    	for(int j=1;j<=s.length()-i;j++){
    		string str = s.substr(i,j);
    		if(isPalindrome(str))
    			cout<<str<<endl;
    	}
    }
    return 0;
}