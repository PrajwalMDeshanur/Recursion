#include<bits/stdc++.h>
using namespace std;

void fun(vector<int>arr,int n,vector<int>ans,int index)
{
        for(auto p:ans )
        cout<<p<<" ";
        cout<<endl;
     for(int i=index;i<n;i++)
     {
        if( i>index && arr[i-1]==arr[i])
        continue;
        ans.push_back(arr[i]);
        fun(arr,n,ans,index+1);
        ans.pop_back();
     }
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    vector<int> ans;
    sort(arr.begin(),arr.end());
  
    fun(arr,n,ans,0);
}