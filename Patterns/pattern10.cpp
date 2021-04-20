#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int osp = n/2,isp=-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=osp;j++)
            cout<<"\t";
        cout<<"*\t";
        for(int j=1;j<=isp;j++)
            cout<<"\t";
        if(i!=1 and i!=n)
            cout<<"*\t";
        cout<<endl;
        if(i<=n/2){
            osp--;
            isp+=2;
        }else{
            osp++;
            isp-=2;
        }
    }
}