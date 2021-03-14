#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c=0;
        cin>>a>>b;
        while(a>0)
        {
            a=a/b;
            b=b+1;
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}