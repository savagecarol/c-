#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        string str;
        cin>>str;
        string s;
        cin>>s;

        int p=str.length();
        int q=s.length();

            if(p!=q)
            {
                cout<<"NO"<<endl;
                continue;

            }
            int arr[26]={0};
            for(int i=0;i<p;i++)
                {
                arr[str[i]-'a']++;
                }

            for(int i=0;i<p;i++)
            {
                arr[s[i]-'a']--;
            }

            int k=0;
            for(int i=0;i<26;i++)
            {
                if(arr[i]>0)
                    {
                    k=1;
                    break;
                    }
            }

        if(k==1)
        {
           cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
return 0;
}
