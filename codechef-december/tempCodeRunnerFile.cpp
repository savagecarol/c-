#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b;
        cin>>a;
        cin>>b;

         ll k;   
        if(a==1 && b ==1)
            {
                cout << a<<endl;
                k = a;
                continue;
            }
    
        cout<< k * b <<endl;
        k = a;




        // ll count=0;
        // if(a==1 && b==1)
        //    { 
        //     cout<<1<<endl;
        //     continue;
        //    }
        
        // for(ll i=1; i<=a ; i++)
        // {
        //     for(ll j=1 ;j<=b ; j++)
        //     {
        //        if( (i+ j) %2 == 0 ) 
        //        { 
        //            count++;
        //        } 
        //     }
        // }

        // cout << count << endl;




        
    }            
    return 0;
}