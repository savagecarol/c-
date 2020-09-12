#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        long long int n;
        cin>>n;
        long long int k=(n*(n+1)/2);
        if(k%2==0)
        {
            cout<<0<<endl;
            continue;
        }
        cout<<0<<endl;
    }
}
