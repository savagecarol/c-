#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void alice()
{
    cout<<"Alice"<<endl;

}

void bob()
{

    
    cout<<"Bob"<<endl;
    
}

void tie()
{
    cout<<"Tie"<<endl;
    
}

void solve()
{   
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n ;i++)
    {
        cin>>a[i];
    }

     sort(a , a + n);
     stack<int> st;

     for(int i=0;i<n;i++)
     {
        st.push(a[i]);
     }
     
    int i = 0;
    
    int j = 0;
    int a_sum =  0 ;
    int b_sum = 0;
 
     while(!st.empty())
     {
         if(i%2==0)
         {
             if(st.top()%2==0)
             {
                 a_sum += st.top();

             }
         }

         else
         {
                 if(st.top()%2!=0)
             {
                 b_sum += st.top();
             }
         }
        i++;
         st.pop();
     }

    if(a_sum == b_sum)
       tie();
    else
    (a_sum>b_sum) ?alice() : bob();  
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

return 0;
}