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
        if(n>=31)
        {
            cout<<"YES"<<endl;
            if(n-30==6 || n-30==10 || n-30==14)
                cout<<6<<" "<<10<<" "<<15<<" "<<n-31<<endl;
            else
            cout<<6<<" "<<10<<" "<<14<<" "<<n-30<<endl;

        }
     else
     {
        cout<<"NO"<<endl;
     }


    }
}
