#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;

    //write your code here
    int sp = n/2,num=1;
    for(int i=1;i<=n;i++){
        int k = i<=n/2+1 ? i:n-i+1;
        for(int j=1;j<=sp;j++)
            cout<<"\t";
        for(int j=1;j<=num;j++){
            cout<<k<<"\t";
            if(j<=num/2)
                k++;
            else
                k--;
        }
        cout<<endl;
        if(i<=n/2){
            sp--;
            num+=2;
        }else{
            sp++;
            num-=2;
        }
    }
}