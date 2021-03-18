#include<bits/stdc++.h>
using namespace std;
int main()
{
while(1)
{
    int a,b;
    cin>>a;
    if(a==0)
    break;
    int A[a];
    for(int i=0;i<a;i++)
    {
        cin>>A[i];
    }
    cin>>b;
    int B[b];
    for(int i=0;i<b;i++)
    {
        cin>>B[i];
    }
    int i=0,j=0;
    long long suma=0,sumb=0,sum=0;
    while(i<a&&j<b)
    {
        if(A[i]==B[j])
        {
            sum+=max(suma,sumb);
            sum+=A[i];
            i++;j++;
            suma=sumb=0;
        }
        if(A[i]<B[j])
        suma+=A[i++];
        else if(B[j]<A[i])
        sumb+=B[j++];
    }
    while(i<a)
    {
        suma+=A[i++];
    }
    while(j<b)
    {
        sumb+=B[j++];
    }
    sum+=max(suma,sumb);
    cout<<sum<<endl;
}
 return 0;
}