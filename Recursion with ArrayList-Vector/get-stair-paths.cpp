#include<bits/stdc++.h>
using namespace std;
vector<string> getStairPath(int n){
    if(n==0){
        vector<string> bres;
        bres.push_back("");
        return bres;
    }else if(n < 0){
        vector<string> bres;
        return bres;
    }
    vector<string> path1 = getStairPath(n-1);
    vector<string> path2 = getStairPath(n-2);
    vector<string> path3 = getStairPath(n-3);
    
    vector<string> path;
    for(string s : path1)
        path.push_back('1'+s);
    for(string s : path2)
        path.push_back('2'+s);
    for(string s : path3)
        path.push_back('3'+s);
    return path;
}
int main(){
    int n; cin>>n;
    vector<string> ans = getStairPath(n);
    cout<<"[";
    int cnt=0;
    for(string str : ans){
        if(cnt != ans.size()-1)
            cout<<str<<", ";
        else
            cout<<str;
        cnt++;
    }
    cout<<"]";
}