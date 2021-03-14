#include<bits/stdc++.h>
using namespace std;
int longest(string A,string B,int a,int b)
{
    if(a==0||b==0)
    return 0;
    if(A[a-1]==B[b-1])
    {
        return 1+longest(A,B,a-1,b-1);
    }
    else{
        int m1=longest(A,B,a-1,b);
        int m2=longest(A,B,a,b-1);
        return max(m1,m2);
    }
    return 0;
}
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int a=str1.length();
    int b=str2.length();
    cout<<longest(str1,str2,a,b);
    return 0;
}