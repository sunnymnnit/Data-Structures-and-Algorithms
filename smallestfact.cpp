#include<bits/stdc++.h>
using namespace std;
int func(int n)
{
    for(int i=5;i<=n;i+=5)
    {
        int temp=i,ans=0;
        while(temp%5==0)
        {
            ans++;
            temp/=5;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int low,mid,high,ans=-1;
    low=0,high=5*n;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        while()
        if(func(mid)>=n)
        {
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return 0;
}