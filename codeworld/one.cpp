#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        int k=n.length();
        int p= (n[0]-'0');

        int sum=10*(p-1);
        if(k==1)
            sum=sum+1;
         if(k==2)
            sum=sum+3;
             if(k==3)
            sum=sum+6;
             if(k==4)
            sum=sum+10;
        cout<<sum<<endl;
    }
    return 0;
}
