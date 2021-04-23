#include<bits/stdc++.h>
#define MAX 12
using namespace std;

void floodfill(int maze[][MAX],int row,int col,string path,bool visited[][MAX],int n,int m) {
    
    if(row < 0 || col < 0 || row == n || col == m || maze[row][col]==1 || visited[row][col]==true){
        return;
    }
    if(row==n-1 and col == m-1){
        cout<<path<<endl;
        return;
    }
    visited[row][col] = true;
    floodfill(maze,row-1,col,path+'t',visited,n,m);
    floodfill(maze,row,col-1,path+'l',visited,n,m);
    floodfill(maze,row+1,col,path+'d',visited,n,m);
    floodfill(maze,row,col+1,path+'r',visited,n,m);
    visited[row][col] = false;
}

int main() {
    int n, m;
    cin >> n >> m;
    int arr[MAX][MAX];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
            
    bool visited[MAX][MAX];
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            visited[i][j] = false;
        
    floodfill(arr,0,0,"",visited,n,m);
}