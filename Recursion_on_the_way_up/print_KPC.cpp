#include <iostream>
using namespace std;

string codes[] = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

void printKPC(string ques, string asf){
    // write your code here
    if(ques.length()==0){
        cout<<asf<<endl;
        return;
    }
    int i = ques[0]-'0';
    string ros = ques.substr(1,ques.length()-1);
    
    string code = codes[i];
    for(int i=0;i<code.length();i++){
        printKPC(ros,asf+code[i]);
    }
}

int main(){
    string str;
    cin >> str;
    printKPC(str, "");
}