#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t-->0)
	{
	    string str;
	    cin>>str;
	    int n=str.length();
	    int l=n,j;
	    for(int i=n-1;i>=0;i--)
	    {
	        if(str[i]=='.' || i==0)
	        {
	           if(i==0)
	            for(j=i;j<l;j++)
	                cout<<str[j];

	           else
	           {
	                for(j=i+1;j<l;j++)
	                    cout<<str[j];
	                 cout<<'.';
	                 l=i;
	           }
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
