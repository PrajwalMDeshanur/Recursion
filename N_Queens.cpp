#include<bits/stdc++.h>
using namespace std;


void solve(vector<string>& board,vector<int>&rowcheck,vector<int> &lowerdigaonal,vector<int>& upperdiagonal,vector<vector<string>>&ans,int n,int col)
{
    if(n==col)
    {
        ans.push_back(board);
        return;
    }
    for(int row=0;row<n;row++)
   { if(rowcheck[row]==0 && lowerdigaonal[row+col]==0 && upperdiagonal[n-1+col-row]==0)
    {
        board[row][col]='Q';
        rowcheck[row]=1;
        lowerdigaonal[row+col]=1;
        upperdiagonal[n-1+col-row]=1;
        solve(board,rowcheck,lowerdigaonal,upperdiagonal,ans,n,col+1);
        board[row][col]='.';
        rowcheck[row]=0;
        lowerdigaonal[row+col]=0;
        upperdiagonal[n-1-row+col]=0;
    }
    }
}




int main()
{
    int n;
    cin>>n;
    vector<vector<string>> ans;
    vector<string>board(n);
    string rowfill(n,'.');
    for(int i=0;i<n;i++)
    {
        board[i]=rowfill;
    }
    vector<int>row(n,0); 
    vector<int>upperdiagonal(2*n-1,0);
    vector<int>lowerdiagonal(2*n-1,0);
    solve(board,row,lowerdiagonal,upperdiagonal,ans,n,0);
   
    for (auto sol : ans) {
        for (auto row : sol) {
            cout << row << endl;
        }
        cout << endl;
    }
}