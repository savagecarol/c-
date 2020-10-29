
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int t;
	    cin>>t;
	    while(t--)
	    {
	        int n;
	        cin>>n;
	        int arr[n];
	        for(int i=0;i<n;i++)
	            cin>>arr[i];
        int area=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int base=abs(j-i);
                int height=abs(min(arr[j],arr[i]));
                int a=base*height;
                if(area<=a)
                    area=a;
            }
        }
        cout<<area<<endl;
	    }
	}
	return 0;
}
