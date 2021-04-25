#include <iostream>
using namespace std;
int cs(int n){
    // write your code here
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    int a = cs(n-1);
    int b = cs(n-2);
    int c = cs(n-3);
    return a+b+c;
}

int main(){
    int n;
    cin>>n;
    cout<<cs(n)<<endl;
}

		Memozaisation
		-------------

#include <iostream>
using namespace std;
int dp[22];
int cs(int n){
    // write your code here
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    if(dp[n]!=0)
        return dp[n];
    int a = cs(n-1);
    int b = cs(n-2);
    int c = cs(n-3);
    return dp [n] = a+b+c;
}

int main(){
    int n;
    cin>>n;
    cout<<cs(n)<<endl;
}

		Tabular-DP
		----------
#include <iostream>
using namespace std;
int cs(int n){
    // write your code here
    int dp[n+1]={0};
    dp[0] = 1;
    for(int i=1;i<=n;i++){
        if(i==1)
            dp[i] = dp[i-1];
        else if(i==2){
            dp[i] = dp[i-1]+dp[i-2];
        }else
            dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    cout<<cs(n)<<endl;
}