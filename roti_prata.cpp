#include<bits/stdc++.h>
using namespace std;
bool func(int *arr,int n,long long mid,int prata)
{
    int t,c=0;
    long long sum;
    for(int i=0;i<n;i++)
    {
        t=2;
        sum=arr[i];
        while(sum<=mid)
        {
            c++;
          sum+=(arr[i]*t);
          t++;
          
          if(c==prata)
          return true;
        }
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,prata,ans;
        cin>>prata;
        cin>>n;
        int chef[n];
        for(int i=0;i<n;i++)
        {
            cin>>chef[i];
        }
        long long start=0,end=1e8,mid;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(func(chef,n,mid,prata))
            {
                ans=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}