#include<bits/stdc++.h>
using namespace std;

void fun(vector<int> arr,int n,vector<int>&ans,int target,int index)
{
    if(index==n)
    {
        if(target==0)
        {
           for(auto it:ans)
           {
            cout<<it<<" ";
           }
           cout<<endl;
        }
        return;
    }
    if(arr[index]<=target)
    {
        ans.push_back(arr[index]);
        fun(arr,n,ans,target-arr[index],index);
        ans.pop_back();
    }
     fun(arr,n,ans,target,index+1);
}


int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int k;
    cin>>k;
    vector<int> ans;
    fun(arr,n,ans,k,0);
}