#include<bits/stdc++.h>
using namespace std;
int rec(int arr[3][3],int a,int b)
{
  int dist;
  dist=(arr[a][b]-1)/3;
       (arr[a][b]-1)%3;
       x=x-a;
       y=y-b;
       rec(arr,a+x,b)+rec(arr,a,b+y);
}
int main()
{
    int arr[3][3];
    int i,j,c=0,mid,x,ans=0,y;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    x=rec(arr,0,0);
       
    cout<<ans/2<<endl;
    return 0;
}