#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> maze,int n,string move,vector<vector<int>> &vis,vector<string> &ans,int i,int j)
{
    if(i==n-1 && j==n-1)
    {
        ans.push_back(move);
        return;
    }
    if(i+1<n && vis[i+1][j]==0 && maze[i+1][j]==1)
    {
        vis[i+1][j]=1;
        solve(maze,n,move+"D",vis,ans,i+1,j);
        vis[i+1][j]=0;
    }

    if(j-1>=0 && vis[i][j-1]==0 && maze[i][j-1]==1)
    {
        vis[i][j-1]=1;
         solve(maze,n,move+"L",vis,ans,i,j-1);
        vis[i][j-1]=0;
    }
    if(j+1<n && vis[i][j+1]==0 && maze[i][j+1]==1)
    {
         vis[i][j+1]=1;
         solve(maze,n,move+"R",vis,ans,i,j+1);
        vis[i][j+1]=0;
    }
        if(i-1>=0 && vis[i-1][j]==0 && maze[i-1][j]==1)
    {
        vis[i-1][j]=1;
        solve(maze,n,move+"U",vis,ans,i-1,j);
        vis[i-1][j]=0;
    }
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> maze(n,vector<int>(n,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cin>>maze[i][j];
    }
    vector<string>ans;
    vector<vector<int>> vis(n,vector<int>(n,0));
    if(maze[0][0]==1)
    solve(maze,n,"",vis,ans,0,0);

    for(auto p:ans)
    {
        cout<<p<<endl;
    }
}