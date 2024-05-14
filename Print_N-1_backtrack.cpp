#include<bits/stdc++.h>
using namespace std;

void fun(int n,int k)
{
    if(k<n)
    return;
    fun(n+1,k);
    cout<<n<<endl;
  
}

int main()
{
    int k;
    cin>>k;
    int n=1;
    fun(n,k);
}