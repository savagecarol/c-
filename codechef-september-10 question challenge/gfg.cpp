#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll arr[n];
	    for(ll i=0;i<n;i++)
	         cin>>arr[i];

	    int count=0;
	    vector<ll> b;
	    for(ll i=0;i<n;i++)
            {

                bool flag=true;
                ll num=arr[i];
                if(num==0)
                    {
                        break;
                    }
            while(num)
                {
                    int x=num%10;
                    if(x>3 || x<1)
                        {
                            flag=false;
                            break;
                        }
                     num=num/10;
                }
                if(flag==true)
                    {   b.push_back(arr[i]);
                        count++;
                    }

            }
            if(count==0)
                cout<<-1;
            else{
                sort(b.begin(), b.end());
                    for (auto x : b)
                        cout << x << " ";
                    }
            cout<<endl;
	}
	return 0;
}
