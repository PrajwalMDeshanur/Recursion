#include<bits/stdc++.h>
using namespace std;

bool fun(string &s,int i,int n)
{
    if(i>=n/2)
    return true;
    if(s[i]!=s[n-i-1])
    return false;
    
    fun(s,i+1,n);
}

int main()
{
    string s;
    cin>>s;
    int n=s.length();
   cout<<fun(s,0,n);
   
}