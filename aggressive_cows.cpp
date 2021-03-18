#include<bits/stdc++.h>
#define int long long 
using namespace std;
bool isvalid(int *arr,int mid,int c,int n)
{
    
    int temp=1,prev=0;
    int count=1;
    while(temp<n)
    {
        if((arr[temp]-arr[prev])>=mid)
        {
            count++;
            prev=temp;
            if(count==c)
            return true;
        }
        temp++;
    }
    return false;
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        int stall[n];
        for(int i=0;i<n;i++)
        {
            cin>>stall[i];
        }
        sort(stall,stall+n);
        int low,mid,high,ans=-1;
        low=1;
        high=stall[n-1];
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(isvalid(stall,mid,c,n))
            {
                ans=mid;
                low=mid+1;
            }
            else
            high=mid-1;

        }
        cout<<ans<<endl;
    }
    return 0;
}