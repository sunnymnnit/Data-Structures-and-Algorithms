#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int n;
    cin>>n;
    vector<pair<pair<int,int>,int>>room(n);
    for(int i=0;i<n;i++)
    {
        
        cin>>room[i].first.first;
        cin>>room[i].first.second;
        room[i].second=i;
    }
    sort(room.begin(),room.end());
    set<pair<int,int>>s;
    vector<pair<int,int>>res;
    int r=1;
    s.insert({room[0].first.second,r++});
    res.push_back({room[0].second,r-1});
    for(int i=1;i<n;i++)
    {            
        if(room[i].first.first>s.begin()->first)
        {                                   
            int temp=s.begin()->second;
            s.erase(s.begin());
            s.insert({room[i].first.second,temp});
            res.push_back({room[i].second,temp});
        }
        else
        {s.insert({room[i].first.second,r++});
         res.push_back({room[i].second,r-1});
        } 
    }    
    sort(res.begin(),res.end());
      cout<<s.size()<<endl;
      for(auto g:res)
      cout<<g.second<<" ";
      return 0;
}

