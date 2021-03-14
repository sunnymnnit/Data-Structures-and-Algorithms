#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main()
{
    int n,in,i,j,c=0;
    cin>>n;
    vector<pair<int,bool>>vec(n);
    for(i=0;i<n;i++)
    {
        cin>>in;
        vec[i].first=in;
        vec[i].second=false;
    }
    int k=-1;
    while(k<n-1)
    {
        k++;
        i=k;
        if(vec[i].second==false)
        { vec[i].second=true;
          c++;
          j=i+1;
            while(j<n)
        {   
          if((vec[i].first<vec[j].first)&&vec[j].second==false)
          { 
              vec[j].second=true;
              i=j;
          } 
            j++;
        }
        }
    }
    cout<<c<<endl;
    return 0;
}
