#include<bits/stdc++.h>
using namespace std;

void fun(int n,int k)
{
    if(k<n)
    return;

    cout<<n<<endl;
    fun(n+1,k);
}

int main()
{
    int k;
    cin>>k;
    int n=1;
    fun(n,k);
}