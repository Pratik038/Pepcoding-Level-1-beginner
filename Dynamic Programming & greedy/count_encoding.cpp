#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    
    int dp[s.length()]={0};
    
    dp[0]=1;
    for(int i=1;i<s.length();i++){
        char ichar = s[i];
        char i1char = s[i-1];
        if(i1char=='0' and ichar=='0'){
            dp[i] = 0;
        }else if(i1char=='0' and ichar!='0'){
            dp[i] = dp[i-1];
        }else if(i1char!='0' and ichar=='0'){
            if(i1char=='1' or i1char=='2'){
                dp[i] = dp[i-1] + ( i>=2 ? dp[i-2] : 1);
            }
            else
                dp[i] = 0;
        }else{
            int x = stoi(s.substr(i-1,2));
            if(x <= 26){
                dp[i] = dp[i-1] + (i>=2 ? dp[i-2] : 1);
            }else{
                dp[i] = dp[i-1];
            }
        }
    }
    cout<<dp[s.length()-1];
}