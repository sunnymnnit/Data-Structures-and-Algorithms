#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        unordered_map<int,int>mp;
        set<int>s;
        vector<int>vec(n);
        for(int i=0;i<n;i++)
        {cin>>vec[i];
         mp[vec[i]]++;
         s.insert(vec[i]);
        }
        vector<int>res;
        for(auto g:s)
        res.push_back(g);
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>1)
            while(it->second>1)
            {
            res.push_back(it->first);
            it->second-=1;
            }
        }
        for(auto g:res)
        cout<<g<<" ";
        cout<<endl;
    }
    return 0;
}