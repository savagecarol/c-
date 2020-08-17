#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[26];
    int c=0;
    for(char l='a';l<='z';l++)
    {
        arr[c]=l;c++;
    }
    int t;
    cin>>t;
    while(t-->0)
    {
        string txt;
        string pat;
        cin>>txt;
        cin>>pat;
        int n=txt.length();
        int r=pat.length();
        int a[26]={0};
        int i,j=0;
        for(i=0;i<n;i++)
        {
            a[txt[i]-'a']++;
            if(j<r)
                a[pat[j]-'a']--;
                j++;
        }
    string left="";
    for(int i=0;i<26;i++)
    {
        if(a[i]==0)
            continue;
        int d=a[i];
        while(d-->0)
        {
            left=left+arr[i];
        }
    }
    string s=left;
    string k="";
    string h="";
    for(int i=0;i<left.length();i++)
    {
        k=left.insert(i,pat);
        if(i==0)
            h=k;
        if(i>0 && h>k)
            h=k;
        left=s;
    }

    cout<<h<<endl;

    }
    return 0;
}
