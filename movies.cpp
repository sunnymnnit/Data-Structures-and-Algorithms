#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }
    vector<pair<int,int>>vec(n);
    for(int i=0;i<n;i++)
    {
        vec[i].first=arr[i][1];
        vec[i].second=arr[i][0];
    }
    sort(vec.begin(),vec.end());
    int i=0,j=1,c=1,maxi=LONG_MIN;
    while(j<n)
    {
        
        if(vec[i].first<=vec[j].second)
        {c++;
        i=j;
        }
        j++;
    }
    
    cout<<c<<endl;
    return 0;
}