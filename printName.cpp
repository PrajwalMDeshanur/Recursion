#include<bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if(n<1)
    return;

    cout<<"Prajwal"<<endl;
    fun(n-1);
}

int main()
{
    int n;
    cin>>n;
    fun(n);
}