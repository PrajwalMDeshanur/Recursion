#include<bits/stdc++.h>
using namespace std;

void fun(vector<int>& arr,vector<int>&ans,int index,int n)
{
    if (index == n) {
        // Print the current subset in ans
       
        for (auto p:ans) {
            cout <<p<<" ";
        }
        if(ans.size()==0)
        {
            cout<<"{} ";
        }
        cout<<endl;
        return;
    }
    ans.push_back(arr[index]);
    fun(arr,ans,index+1,n);
    ans.pop_back();
    fun(arr,ans,index+1,n);
}

int main()
{
    int n;
    cin>>n;
   vector<int> arr(n);
   for(int i=0;i<n;i++)
   cin>>arr[i];
   vector<int>ans;
  
  fun(arr,ans,0,n);
}