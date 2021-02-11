#include<bits/stdc++.h>
using namespace std;
int c=0;
void dfs(vector<vector<int>>&vec,int src,bool *vis)
{
    vis[src]=true;
    for(auto g:vec[src])
    {
        if(vis[g]==true)
        {
            cout<<c<<" ";
            return ;
        }
        else
        {
            c++;
            dfs(vec,g,vis);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int mat[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>mat[i];
    }
    vector<vector<int>>vec(n+1);
    for(int i=1;i<=n;i++)
    {
        vec[i].push_back(mat[i]);
    }
    bool vis[n+1];
    for(int i=1;i<=n;i++)
    {
        c=0;
        memset(vis,false,sizeof(vis));
        dfs(vec,1,vis);
    }
return 0;
}