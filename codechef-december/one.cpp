#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

        ll d1 , v1, d2 , v2, p;
        cin>>d1;
        cin>>v1;
        cin>>d2;
        cin>>v2;
        cin>>p;  
        ll days = 0;
        ll k;  
  
        if( d1 == d2 )
        {
            if(p % (v1+v2) == 0)
                k = p / (v1+v2);
            else
                k = p / (v1+v2)+1;
            cout<< (d1-1) + k;
        }
        
        else if(d2>d1)
        {
            
           days+=d1-1;
            ll k = d2 - d1;
            ll sum1 = k * v1;
            if(sum1<p)
                {
                    p = p - sum1;
                    days+=k;
                    ll lol;
                    if(p % (v1+v2) == 0)
                          lol = p / (v1+v2);
                    else
                        lol = p / (v1+v2)+1;
                    cout<<  days + lol;         
                }
            else
                {

                       if(p%v1==0)
                        cout<< days + p/v1;
                    else
                        cout<< days + p/v1+1;
                    
                }
           
            }   


            else if(d1>d2)
            {


                days+=d2-1;
            ll k = d1 - d2;
            ll sum1 = k * v2;
            if(sum1<p)
                {
                    p = p - sum1;
                    days+=k;
                    ll lol;
                    if(p % (v1+v2) == 0)
                          lol = p / (v1+v2);
                    else
                        lol = p / (v1+v2)+1;
                    cout<<  days + lol;         
                }
            else
                {

                       if(p%v2==0)
                        cout<< days + p/v2;
                    else
                        cout<< days + p/v2+1;
                    
                }

            }
        
            
    return 0;
}