#include<iostream>
#include<vector>

using namespace std;

// sr - source row
// sc - source column
// dr - destination row
// dc - destination column
vector <string> getMazePaths(int sr, int sc, int dr, int dc) {
    if(sc==dc and sr==dr){
        vector<string> bres;
        bres.push_back("");
        return bres;
    }
    
    vector<string> hpath;
    if(sc < dc)
        hpath = getMazePaths(sr,sc+1,dr,dc);
    vector<string> vpath;
    if(sr < dr)
        vpath = getMazePaths(sr+1,sc,dr,dc);
    
    vector<string> mres;
    for(string s : hpath)
        mres.push_back('h' + s);
     for(string s : vpath)
        mres.push_back('v' + s);
    return mres;
}

void display(vector<string>& arr){
    cout << "[";
    for(int i = 0;i < arr.size();i++){
        cout << arr[i];
        if(i < arr.size() -1) cout << ", ";
    }
    
    cout << "]"<<endl;
}


int main() {
    int n,m; cin >> n >> m;
    vector<string> ans = getMazePaths(0,0,n-1,m-1);
    display(ans);

    return 0;
}