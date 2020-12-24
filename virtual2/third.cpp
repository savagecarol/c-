#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n>45)
         {
             cout<<-1<<endl;
             continue;
         }
        if(n<9)
        {
            cout<<n<<endl;
            continue;
        }

        int arr[10] = {0};
        int i = 9;
        while(n>9)
        {
                arr[i]=1;
                n=n-i;
                i--;
        }
        for(int i=9;i>=1;i--)
        {
            if(arr[i]!=1 && n>=i)
                {
                    n=n-i;
                    arr[i]=1;
                }
        }

        for(int i=1;i<=9;i++)
        {
            if(arr[i]==1)
                cout<<i;
        }
        cout<<endl;
    }
    return 0;
}

