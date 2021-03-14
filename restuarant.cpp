#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,in,i,j,k;
    cin>>n;
    int ari[n],dep[n];
    for(i=0;i<n;i++)
    {
        cin>>ari[i]>>dep[i];
    }
    sort(ari,ari+n);
    sort(dep,dep+n);
    int sum[n*2];
    i=j=k=0;
    while(i<n&&j<n)
    {
        if(ari[i]<dep[j])
        {sum[k++]=1;
         i++;
        }
        else if(ari[i]>dep[j])
        {
          sum[k++]=-1;
          j++;
        }
        else
        {
            sum[k++]=0;
            i++;j++;
        } 
    }
    for(;i<n;i++)
    sum[k++]=1;
    for(;j<n;j++)
    sum[k++]=-1;
    for(i=1;i<(2*n);i++)
    {
        sum[i]=sum[i]+sum[i-1];
    }
    cout<<*max_element(sum, sum+(2*n))<<endl;
    return 0;
}