#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
    int n;
    cin>>n;
    string str;
    cin>>str;
    int pro=0;
    for(int i=0;i<n-6;i++)
    {
        int p=i+7;
        string s=str.substr(i,p);
        if(s.compare("abacaba")==0)
            pro++;
    }
    if(pro==1)
    {
        for(int i=0;i<n;i++)
        {
        if(str[i]=='?')
            str[i]='z';
        }
        cout<<"YES"<<endl<<str;
        continue;
    }


    int c=0;
    for(int i=0;i<n-6;i++)
    {
        int p=i+7;
        int count=0;
        for(int j=i;j<p;j++)
        {
            if(str[j]=='?' && c==0)
            {
            if(count==0|| count==2 || count==4||count==6)
                str[j]='a';
            if(count==1 || count==5)
                str[j]='b';
            if(count==3)
                str[j]='c';
            }
            else if(str[j]=='?' && c>0)
                str[j]='z';
            count++;
        }
        string s=str.substr(i,p);
        if(s.compare("abacaba")==0)
                c++;
    }
    if(c==1)
        cout<<"YES"<<endl<<str;
    else
        cout<<"NO";

    cout<<endl;
    }
    return 0;
}

