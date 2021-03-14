#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main()
{
  int n,in,diff,sum=0;
  cin>>n;
  vector<int>vec(n);
  for(int i=0;i<n;i++)
  {
      cin>>in;
      vec[i]=in;
  }
  sort(vec.begin(),vec.end());
  if((n&1)==1)
  {
      diff=vec[n/2];
  }
  else
  {
      diff=vec[n/2];
  }
for(int i=0;i<n;i++)
{
    sum+=abs(diff-vec[i]);
}
      cout<<sum<<endl;
    return 0;
}