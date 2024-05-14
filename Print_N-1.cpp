#include<bits/stdc++.h>
using namespace std;

void fun(int k)
{
    if(k<1)
    return;

    cout<<k<<endl;
    fun(k-1);
}

int main()
{
    int k;
    cin>>k;

    fun(k);
}