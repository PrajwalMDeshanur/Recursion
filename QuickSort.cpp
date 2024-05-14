#include<bits/stdc++.h>
using namespace std;


int quickSort(vector<int> &arr,int low,int high)
{
    int i=low;
    int j=high;
    int pivot=arr[low];
    while(i<j)
    {
    while(arr[i]<=pivot && i<=high)
    i++;
    while(arr[j]>=pivot && j>low)
    j--;
    if(i<j)
    swap(arr[i],arr[j]);
    }
  
    swap(arr[j],arr[low]);

    return j;
    
}



void qs(vector<int> &arr,int low,int high)
{
    if(low<high)
    {
        int partionIndex=quickSort(arr,low,high);
        qs(arr,low,partionIndex-1);
        qs(arr,partionIndex+1,high);
    }
}

int main()
{
   int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    qs(arr, 0, n - 1);

    // Print the sorted array
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}