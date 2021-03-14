#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main()
{
    int n,in,sum=0;
    int maxi;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>in;
        vec[i]=in;
    }
    maxi=vec[0];
    for(int i=0;i<n;i++)
    {
          
        
        sum+=vec[i];
          maxi=max(maxi,sum);
        if(sum<0)
        {
            sum=0;
            
        }
    }
    cout<<maxi<<endl;
    return 0;
}