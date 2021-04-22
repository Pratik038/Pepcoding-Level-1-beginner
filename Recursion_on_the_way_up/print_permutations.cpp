#include <iostream>
using namespace std;

void printPermutations(string str, string asf){
    // write your code here
    if(str.length()==0){
        cout<<asf<<endl;
        return;
    }
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        string q1 = str.substr(0,i);
        string q2 = str.substr(i+1,str.length()-i-1);
        string q = q1 + q2;
        printPermutations(q,asf+ch);
    }
}

int main(){
    string str;
    cin>>str;
    printPermutations(str,"");
    
}