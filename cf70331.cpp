#include<bits/stdc++.h>
using namespace std;
int quer(int l,int r)
{
    cout<<"? "<<l<<" "<<r<<endl;
    fflush(stdout);
    int in;
    cin>>in;
    return in;
}
int main()
{
    int n,mid;
    cin>>n;
    int l=1,r=n;
    int x=quer(l,r);
    bool lft=false;
    if(x!=1)
    {if(quer(1,x)==x)
      lft=true;
    }  
    if(lft==false)
    {
        l=x+1;r=n;
        while(l<=r)
       { mid=l+r >>1;
        if(quer(mid,x)==x)
        {
            r=mid-1;
        }
        else
        l=mid+1;
       }
       cout<<"! "<<l<<endl; 
       fflush(stdout);
    }
    else
    {
         l=1;r=x-1;
        while(l<=r)
       { mid=l+r >>1;
        if(quer(mid,x)==x)
        {
            l=mid+1;
        }
        else
        r=mid-1;
       }
       cout<<"! "<<r<<endl; 
       fflush(stdout);
    }
    return 0;
}