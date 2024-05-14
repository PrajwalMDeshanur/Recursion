#include<bits/stdc++.h>
using namespace std;

int fun(int k)
{
    if(k==0)
    return 1;
      cout<<k*fun(k-1)<<" ";
    return k*fun(k-1);
  
}

int main()
{
    int k;
    cin>>k;

   int z= fun(k);
   //cout<<z<<endl;
}