#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int k;
	    cin>>k;


	   queue<int> q;
	   
	   for(int i=0;i<k;i++)
	   {
           if(arr[i] < 0)
	        q.push(i);       
	   }
 
     
       for(int i=k;i<n;i++)
       {
              if(q.empty())
	        {
	            cout<<0<<" ";
	        }
	        else
	        {
	            cout<<arr[q.front()]<<" ";
	        }

            if(arr[i] < 0)
                q.push(i);

            while(!q.empty() && q.front() < i-k+1)
            {
                        q.pop();
            
                    }
              if(arr[i]<0)
	        {
	            q.push(i);
	        }

       }
       if(q.empty())
	        {
	            cout<<0<<" ";
	        }
	        else
	        {
	            cout<<arr[q.front()]<<" ";
	        }
	    
	    cout<<endl;
	}
	return 0;
}