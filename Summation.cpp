 #include<bits/stdc++.h>
 using namespace std;
 int minSteps(int d) {
        // code here
        int sum=0;
        int i=1;
        int cnt=0;
         
        while(sum<d || abs((sum-d))%2!=0)
        {
        
            cnt++;
            sum=sum+cnt;
        }
         return cnt;
    }
    int main()
    {
        int n;
        cin>>n;
       int k= minSteps(n);
       cout<<k;
    }