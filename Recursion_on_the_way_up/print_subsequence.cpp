#include <iostream>
using namespace std;

void printSS(string ques, string ans){
    // write your code here
    if(ques.length()==0){
        cout<<ans<<endl;
        return;
    }
    
    char ch = ques[0];
    string ros = ques.substr(1,ques.length()-1);
    
    printSS(ros,ans+ch);
    printSS(ros,ans + "");
}

int main(){
    string str;
    cin >> str;
    printSS(str, "");
}