#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int temp=n/(k-1);
        while(temp>=0)
        {
          int ans=n-((k-1)*temp);
          if(ans==0)
          ans=1;
          if((temp%ans==0)||(ans%temp==0))
          {
              if((ans+(k-1)*temp)==n)
              {cout<<ans<<" ";
              for(int m=0;m<k-1;m++)
              cout<<temp<<" ";
              cout<<endl;
              break;
              }
          }
          temp--;
        }
    }
    return 0;
}
