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
    vector<int>s;
    s.push_back(vec[0]);
    for(int i=1;i<n;i++)
    {
       auto it=upper_bound(s.begin(),s.end(),vec[i]);
       if(it!=s.end())
       {
          *it=vec[i];
          
       }
       else
       s.push_back(vec[i]);
    }
    cout<<s.size()<<endl;
    return 0;
}