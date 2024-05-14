#include<bits/stdc++.h>
using namespace std;


void merge(vector<int> &arr,int mid,int low,int high)
{
    int l=low;
    int r=mid+1;
    vector<int> temp;
    while(l<=mid && r<=high)
    {
        if(arr[l]<=arr[r])
        {
            temp.push_back(arr[l]);
            l++;
        }
        else
        {
            temp.push_back(arr[r]);
            r++;
        }
    }
    while(l<=mid)
    {
        temp.push_back(arr[l]);
        l++;
    }
    while (r<=high)
    {
        temp.push_back(arr[r]);
        r++;
    }
    
     for (int i = 0; i < temp.size(); i++)
        arr[low + i] = temp[i];
}



void ms(vector<int> &arr,int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        ms(arr,low,mid);
        ms(arr,mid+1,high);
        merge(arr,mid,low,high);
    }
}

int main()
{
   int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ms(arr, 0, n - 1);

    // Print the sorted array
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}