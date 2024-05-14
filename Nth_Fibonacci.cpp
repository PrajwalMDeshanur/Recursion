#include<bits/stdc++.h>
using namespace std;

int fun(int k)
{
    if(k==0 || k==1)
    return k;

    return fun(k-2)+fun(k-1);
}

int main()
{
    int k;
    cin>>k;

   int z= fun(k);
   cout<<z<<endl;
}