#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main()
{
    int n,target,in,i,j,flag=0;
    cin>>n>>target;
    vector<pair<int,int>>vec(n);
    for(i=0;i<n;i++)
    {
        cin>>in;
        vec[i].first=in;
        vec[i].second=i+1;
    }
    sort(vec.begin(),vec.end());
    i=0;j=n-1;
    while(i<j)
    {
        if(target<(vec[i].first+vec[j].first))
        {
           j--;
        }
        else if(target>(vec[i].first+vec[j].first))
        {
            i++;
        }
        else{
            cout<<vec[i].second<<" "<<vec[j].second<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}