#include<bits/stdc++.h>
using namespace std;

void fun(int k)
{
    if(k<1)
    return;
    fun(k-1);
    cout<<k<<endl;
    
}

int main()
{
    int k;
    cin>>k;

    fun(k);
}