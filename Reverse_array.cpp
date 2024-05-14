#include<bits/stdc++.h>
using namespace std;

void fun(string &s,int i,int n)
{
    if(i>=n/2)
    return ;
    swap(s[i],s[n-i-1]);
    
    fun(s,i+1,n);
}

int main()
{
    string s;
    cin>>s;
    int n=s.length();
   fun(s,0,n);
   cout<<s<<endl;
}