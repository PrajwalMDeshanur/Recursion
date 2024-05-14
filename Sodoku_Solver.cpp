#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<vector<int>> &board,int row,int col,int num)
{
    for(int i=0;i<=9;i++)
    {
        if(board[row][i]==num)
        return false;

        if(board[i][col]==num)
        return false;

        if(board[3*(row/3)+i/3][3*(col/3)+i%3])
        return false;

    }
    return true;
}

bool solve(vector<vector<int>> &board)
{
    for(int i=0;i<board.size();i++)
    {
        for(int j=0;j<board[0].size();j++)
        {
            if(board[i][j]=='.')
            {
                for(int i=0;i<=9;i++)
                {
                    if(isValid(board,row,col,i))
                    {
                        board[i][j]=i;
                        if(solve(board)==true)
                        return true;
                        else
                        board[i][j]='.';
                    }
                }
                return false;
            }
        }
    }
    return true;
}
