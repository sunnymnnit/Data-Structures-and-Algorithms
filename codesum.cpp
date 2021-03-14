#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        vector<int>res;
        
        if((k&1)==1)
        i=k/2+1;
        else
        i=k/2;
        for(;i<k;i++)
        res.push_back(i);
        for(i=k+1;i<=n;i++)
        res.push_back(i);
        cout<<res.size()<<endl;
        for(auto g:res)
        cout<<g<<" ";
    }
    return 0;
}