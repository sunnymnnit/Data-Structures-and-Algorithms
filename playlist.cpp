#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main()
{
    int n,in,i;
    cin>>n;
    vector<int>vec(n);
    for(i=0;i<n;i++)
    {
        cin>>in;
        vec[i]=in;
    }
unordered_map<int,int>mp;    
vector<int>cal(n,0);
for(i=0;i<n;i++)
{
    if(mp[vec[i]]==1)
    cal[i]=-1;
    else
  mp[vec[i]]=1;
}
for(i=0;i<n;i++)
if(mp[vec[i]]==1)
cal[i]=-1;
int st,en,diff,maxi=INT_MIN;
i=0;
while(i<n&&cal[i]==0)
i++;
st=0;
en=i;
diff=en-st;
maxi=max(maxi,diff);
for(;i<n;i++)
{
    if(cal[i]==-1)
    {
        
            st=en;
            en=i;
            diff=en-st;
            maxi=max(diff,maxi);
        
    }
}

    diff=n-1-st;
    maxi=max(diff,maxi);
    cout<<maxi<<endl;
    return 0;
}