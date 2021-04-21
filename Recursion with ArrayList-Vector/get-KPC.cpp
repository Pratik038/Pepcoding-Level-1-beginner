#include<bits/stdc++.h>
using namespace std;
string codes[]={".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
vector<string> getKPC(string s){
    
    if(s.length()==0){
        vector<string> bres;
        bres.push_back("");
        return bres;
    }
    
    int i = s[0]-'0';
    
    string ros = s.substr(1,s.length()-1);
    
    vector<string> rres = getKPC(ros);
    
    string code = codes[i];
    
    vector<string> mres;
    
    for(int i=0;i<code.length();i++){
        for(string str : rres){
            mres.push_back(code[i] + str);
        }
    }
    return mres;
}
int main(){
    string s; cin>>s;
    vector<string> v = getKPC(s);
    int cnt = 0;
    cout<<"[";
    for(string str : v){
        if(cnt != v.size()-1)
            cout<<str<<", ";
        else
            cout<<str;
        cnt++;
    }
    cout<<"]";
}