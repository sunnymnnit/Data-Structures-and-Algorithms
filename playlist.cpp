#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main()
{
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    map<int,int>mp;
    int i,j=-1,maxi=LONG_MIN;
    i=0;
    while(i<n)
    {
        if(mp.find(vec[i])!=mp.end())
        {
            if(j<mp[vec[i]])
            j=mp[vec[i]];
        }
        mp[vec[i]]=i;
        int temp=i-j;
        maxi=max(maxi,temp);
        i++;
    }
    cout<<maxi<<endl;
    return 0;
}