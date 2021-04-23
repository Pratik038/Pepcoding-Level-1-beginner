#include<bits/stdc++.h>
using namespace std;
const int MAX = 12;
bool isPlaceSafe(int chess[][MAX],int row,int col,int n){
    
    for(int i=row-1,j=col;i>=0;i--){
        if(chess[i][j]==1)
            return false;
    }
    
    for(int i=row-1,j=col-1;i>=0 and j>=0;i--,j--){
        if(chess[i][j]==1)
            return false;
    }
    
    for(int i=row-1,j=col+1;i>=0 and j<n;i--,j++){
        if(chess[i][j]==1)
            return false;
    }
    
    return true;
}
void nqueen(int chess[][MAX],string str,int row,int n){
    if(row == n){
        cout<<str<<".\n";
        return;
    }
    
    for(int col=0;col<n;col++){
        if(isPlaceSafe(chess,row,col,n)==true){
            chess[row][col] = 1;
            nqueen(chess,str+to_string(row)+"-"+to_string(col)+", ",row+1,n);
            chess[row][col] = 0;
        }
    }
}
int main(){
    int n; cin>>n;
    int chess[MAX][MAX];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            chess[i][j] = 0;
    }
    nqueen(chess,"",0,n);
}