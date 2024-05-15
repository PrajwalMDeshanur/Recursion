#include<bits/stdc++.h>
using namespace std;

bool isValid(int start,int end,string s)
{
    while(start<=end)
    {
        if(s[start]!=s[end])
        return false;
        start++;
        end--;
    }
    return true;
}


void solve(string s,int n,int index,vector<vector<string>>& ans, vector<string> &path)
{
   
    if(index==n)
    {
        ans.push_back(path);
        return;
    }
    for(int i=index;i<n;i++)
    {
        if(isValid(index,i,s))
        {
            path.push_back(s.substr(index,i-index+1));
            solve(s,n,i+1,ans,path);
            path.pop_back();
        }
    }
}


int main()
{
    string s;
    cin>>s;
    int n=s.length();
    vector<string> path;
    vector<vector<string>> ans;
    solve(s,n,0,ans,path);
    
    for(auto p:ans)
    {
        for(auto q:p)
        {
            cout<<q<<" ";
        }
      cout<<endl;
    }
}