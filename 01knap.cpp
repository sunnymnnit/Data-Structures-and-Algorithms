#include<bits/stdc++.h>
using namespace std;
int knap(int *wt,int *pro,int W,int n)
{
    if(W==0||n==0)
    {
       return 0;
    }
    if(wt[n-1]<=W)
    {
        return max((knap(wt,pro,W-wt[n-1],n-1)+pro[n-1]),knap(wt,pro,W,n-1));
    }
    else
    {
        return knap(wt,pro,W,n-1);
    }
    return 0;
}
int main()
{
    int n,i,W;
    cout<<"enter max weight\n";
    cin>>W;
    cout<<"enter size of array\n";
    cin>>n;
    int wt[n],pro[n];
    for(i=0;i<n;i++)
    {
        cin>>wt[i]>>pro[i];
    }
    cout<<endl<<knap(wt,pro,W,n)<<endl;
}