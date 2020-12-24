#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void yes()
{
    cout<<"YES";
}

void no()
{
    cout<<"NO";
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr;
        cin>>arr;

       if(arr[0] == '2' && arr[1] == '0' && arr[2]== '2' && arr[3]=='0')
            yes();

    else if(arr[0] == '2' && arr[1] == '0' && arr[2]== '2' && arr[n-1]=='0')
            yes();

    else if(arr[0] == '2' && arr[1] == '0' && arr[n-2]== '2' && arr[n-1]=='0')
        yes();
        else if(arr[0] == '2' && arr[n-3] == '0' && arr[n-2]== '2' && arr[n-1]=='0')
        yes();
            else if(arr[n-4] == '2' && arr[n-3] == '0' && arr[n-2]== '2' && arr[n-1]=='0')
        yes();
    else
        no();
    cout<<endl;
    }

    return 0;
}
