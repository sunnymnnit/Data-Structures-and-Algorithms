#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        int temp=(2*k+1);
        if(temp>n)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int i=0,j=n-1;
        string ans="YES";
        while(i<k)
        {   ans="YES";
            if(str[i]!=str[j])
            {
                ans="NO";
                break;
            }
            i++;j--;
        }
        cout<<ans<<endl;
    }
    return 0;
}