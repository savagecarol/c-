#include<iostream>
using namespace std;

int main()
{
int t;

cin>>t;

while(t-->0)
{
    int n;
    cin>>n;
    string s;

    cin>>s;
    if(n==1 && s[0]=='0')
        {
        cout<<0<<endl;
        continue;
        }
     if(n==1 && s[0]=='1')
        {
            cout<<1<<endl;continue;
        }
    for(int i=0;i< ((2 *n) -1)- n ;i++)
    {



    }




   cout<<endl;

}
return 0;
}
