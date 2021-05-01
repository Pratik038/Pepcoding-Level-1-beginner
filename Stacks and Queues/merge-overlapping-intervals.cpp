#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    pair<int,int> a[n];
    for(int i=0;i<n;i++)
    	cin>>a[i].first>>a[i].second;

    sort(a,a+n);

    stack<pair<int,int>> s;
    s.push(a[0]);
    for(int i=1;i<n;i++){
    	if(s.top().second < a[i].first){
    		s.push(a[i]);
    	}else{
    		pair<int,int> p = s.top();
    		s.pop();
    		s.push({p.first,max(p.second,a[i].second)});
    	}
    }

    stack<pair<int,int>> st;
    while(s.size() > 0){
    	st.push(s.top());
    	s.pop();
    }

    while(st.size() > 0){
    	cout<<st.top().first<<" "<<st.top().second<<endl;
    	st.pop();
    }
} 