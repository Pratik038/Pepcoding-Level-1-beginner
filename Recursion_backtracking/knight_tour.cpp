#include<bits/stdc++.h>
using namespace std;
void display(int chess[][5],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<chess[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void knightTour(int chess[][5],int row,int col,int move,int n){
    
    if(row < 0 or col < 0 or row >= n or col >= n or chess[row][col]>0){
        return;
    }else if(move == n*n){
        chess[row][col] = move;
        display(chess,n);
        chess[row][col] = 0;
    }
    chess[row][col] = move;
    knightTour(chess,row-2,col+1,move+1,n);
    knightTour(chess,row-1,col+2,move+1,n);
    knightTour(chess,row+1,col+2,move+1,n);
    knightTour(chess,row+2,col+1,move+1,n);
    knightTour(chess,row+2,col-1,move+1,n);
    knightTour(chess,row+1,col-2,move+1,n);
    knightTour(chess,row-1,col-2,move+1,n);
    knightTour(chess,row-2,col-1,move+1,n);
    chess[row][col] = 0;
}
int main(){
    int n; cin>>n;
    int row,col; cin>>row>>col;
    int chess[5][5];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            chess[i][j] = 0;
    }
    knightTour(chess,row,col,1,n);
}