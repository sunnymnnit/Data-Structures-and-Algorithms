#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int n,m;
    cin>>n>>m;
    int low,mid,high,sum=0,ans=-1;
    low=0,high=LONG_MIN;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        high=max(high,arr[i]);
    }
    while(low<=high)
    {
        mid=low+(high-low)/2;
        sum=0;
        for(int i=0;i<n;i++)
        {
            if(mid>=arr[i])
            continue;
            else
            {
                sum+=(arr[i]-mid);
            }
        }
        if(sum>=m)
        {
            ans=mid;
            low=mid+1;
        }
        else if(sum<m)
        {
            high=mid-1;
        }
        
    }
    cout<<ans<<endl;
    return 0;
}