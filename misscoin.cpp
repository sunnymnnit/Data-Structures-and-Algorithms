#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int n;
    cin>>n;
    vector<int>vec(n);
    int i,in;
    for(i=0;i<n;i++)
    {
        cin>>in;
        vec[i]=in;
    }
    int sm=1;
    sort(vec.begin(),vec.end());
    for(i=0;i<n;i++)
    {
        if(sm<vec[i])
        break;
        else
        {
            sm+=vec[i];
        }
    }
    cout<<sm<<endl;
    return 0;
}