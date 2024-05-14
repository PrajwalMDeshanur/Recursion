#include<bits/stdc++.h>
using namespace std;

void fun(vector<int>arr,int n,vector<int> &ans,int sum,int index)
{
    if(n==index)
    {
        cout<<sum<<endl;
        return;
    }
    
    fun(arr,n,ans,sum+arr[index],index+1);
    fun(arr,n,ans,sum,index+1);
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    vector<int> ans;
    fun(arr,n,ans,0,0);
}