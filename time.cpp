#include<bits/stdc++.h>
using namespace std;
bool valid(int A,int C)
{
    int a1=A/10;
    int a2=A%10;
    if(a1==3||a1==4||a1==6||a1==7||a1==9)
    return false;
    if(a2==3||a2==4||a2==6||a2==7||a2==9)
    return false;
    int temp=a1;
    a1=a2;
    a2=temp;
    if(a1==2)
    a1=5;
    if(a1==5)
    a1=2;
    if(a2==2)
    a2=5;
    if(a2==5)
    a2=2;
    temp=10*a1+a2;
    if(temp<C)
    return true;
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,m,H,M;
        cin>>h>>m;
        cin>>H>>M;
        int tempH,tempM,ansM,ansH;
        tempH=H;tempM=M;
        while(tempM<m)
        {
            if(valid(tempM,h))
            {
                ansM=tempM;break;
            }
            if(tempM+1==m)
            {ansM=0;tempH++;}
            tempM++;
        }
        if(tempH==h)
        ansH=0;
        while(tempH<h)
        {
            if(valid(tempH,m))
            {ansH=tempH;break;}
            if(tempH+1==h)
            ansH=0;
            tempH++;
        }
        string res="";
        if((ansH/10)==0)
        {res+="0";}
        res+=to_string(ansH);
        res+=":";
        if((ansM/10)==0)
        {
            res+="0";
        }
        res+=to_string(ansM);
        cout<<res<<endl;
        
    }
    return 0;
}