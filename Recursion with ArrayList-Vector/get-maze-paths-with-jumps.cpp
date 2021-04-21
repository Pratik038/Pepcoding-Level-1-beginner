#include<bits/stdc++.h>
using namespace std;
vector<string> getMazePath(int sr,int sc,int dr,int dc){
    if(sc==dc and dr==sr){
        vector<string> bres;
        bres.push_back("");
        return bres;
    }
    vector<string> mres;
    for(int i=1;i<=dc-sc;i++){
        vector<string> hpaths = getMazePath(sr,sc+i,dr,dc);
        for(string hpath : hpaths)
            mres.push_back("h" + to_string(i) + hpath);
    }
    
    for(int i=1;i<=dr-sr;i++){
        vector<string> vpaths = getMazePath(sr+i,sc,dr,dc);
        for(string vpath : vpaths)
            mres.push_back("v" + to_string(i) + vpath);
    }
    
    for(int i=1;i<=(dr-sr) && i<=(dc-sc);i++){
        vector<string> dpaths = getMazePath(sr+i,sc+i,dr,dc);
        for(string dpath : dpaths)
            mres.push_back("d" + to_string(i) + dpath);
    }
    return mres;
}
int main(){
    int n,m; cin>>n>>m;
    vector<string> ans = getMazePath(1,1,n,m);
    int cnt=0;
    cout<<"[";
    for(string s : ans){
         if(cnt != ans.size()-1)
            cout<<s<<", ";
        else
            cout<<s;
        cnt++;
    }
    cout<<"]";
    
}