// #include<bits/stdc++.h>
// using namespace std;

// void fun(vector<int> arr,int n,vector<int>&ans, vector<vector<int>> ans1,int k,int index,int sum)
// {
//     if(index==n)
//     {
//         if(sum==k)
//         {
//            for(auto it:ans)
//            {
//             cout<<it<<" ";
//            }
//            cout<<endl;
//         }
//         return;
//     }
//     ans.push_back(arr[index]);
//     sum+=arr[index];
//     fun(arr,n,ans,ans1,k,index+1,sum);
//     sum-=arr[index];
//     ans.pop_back();
//     fun(arr,n,ans,ans1,k,index+1,sum);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++)
//     cin>>arr[i];
//     int k;
//     cin>>k;
//     vector<int> ans;
//     vector<vector<int>> ans1;
//     fun(arr,n,ans,ans1,k,0,0);
// }

//ONLY ONE OUTPUT===============
// #include<bits/stdc++.h>
// using namespace std;

// bool fun(vector<int> arr,int n,vector<int>&ans, vector<vector<int>> ans1,int k,int index,int sum)
// {
//     if(index==n)
//     {
//         if(sum==k)
//         {
//            for(auto it:ans)
//            {
//             cout<<it<<" ";
//            }
//            cout<<endl;
//            return true;
//         }
//         return false;
//     }
//     ans.push_back(arr[index]);
//     sum+=arr[index];
//     if(fun(arr,n,ans,ans1,k,index+1,sum)==true)
//     return true;
//     sum-=arr[index];
//     ans.pop_back();
//     if(fun(arr,n,ans,ans1,k,index+1,sum)==true)
//     return true;
//     return false;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++)
//     cin>>arr[i];
//     int k;
//     cin>>k;
//     vector<int> ans;
//     vector<vector<int>> ans1;
//     fun(arr,n,ans,ans1,k,0,0);
// }

//COUNT THE NUMBER OF POSSIBLE SUBSEQUENCE
#include<bits/stdc++.h>
using namespace std;

int fun(vector<int> arr,int n,vector<int>&ans, vector<vector<int>> ans1,int k,int index,int sum)
{
    if(index==n)
    {
        if(sum==k)
        {
           return 1;
        }
        return 0;
    }
    ans.push_back(arr[index]);
    sum+=arr[index];
    int l=fun(arr,n,ans,ans1,k,index+1,sum);
   
    sum-=arr[index];
    ans.pop_back();
    int r=fun(arr,n,ans,ans1,k,index+1,sum);
   
    return l+r;
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
    vector<vector<int>> ans1;
    int z=fun(arr,n,ans,ans1,k,0,0);
    cout<<z;
}