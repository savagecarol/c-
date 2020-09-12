#include<iostream>
#include<bits/stdc++.h>


using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    int n;
    cin>>n;
    int k;
    cin>>k;
    string str;
    cin>>str;
    deque<char> dq;

    int zero=0;
    int one=0;
    int ques=0;
    for(int i=0;i<k;i++)
    {
    dq.push_back(str[i]);
       if(dq[i]=='0')
        zero++;
        else if(dq[i]=='1')
        one++;
        else if(dq[i]=='?')
        ques++;
    }

    if(abs(one-zero)==ques)
    {
        int k=0;
        for(int i=k;i<str.size();i++)
        {
            char a=dq.front();
            if(a=='0')
                zero--;
            else if(a=='1')
                one--;
            else if(a=='?')
                ques--;

            dq.pop_front();

            dq.push_back(str[i]);
             if(str[i]=='0')
                zero++;
            else if(str[i]=='1')
                one++;
            else if(str[i]=='?')
                ques++;

             if(abs(one-zero)!=ques)
                {
                    k=1;
                    break;
                }
        }
        if(k==1)
        {
                cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }

    }

    else
    {
        cout<<"NO";

    }

    cout<<endl;

 }
 return 0;
}
