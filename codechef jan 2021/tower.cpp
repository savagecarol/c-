// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define mp make_pair
// #define fi first
// #define se second
// #define pb push_back

// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;


// void solve()
// {   
//     int n , k;
//     cin >> n >> k ;

//     int arr[n];
//     int sum = 0 ;
//     for(int i=0;i<n;i++)
//         {
//              cin >> arr[i];
//              sum+=arr[i];
//         }
        
//         if(sum <(2*k))
//         {
//                 cout << -1 ;
//                 return;
//         }

//     sort(arr, arr + n , greater<int>());
      
//       if(arr[0] >= k && arr[1]>=k)
//       {
//           cout<< 2;
//           return;
//       }

//         if(arr[0] >= k && arr[1]<k)
//       {
//             int val = 0;
//             int count = 0;
//             int i;;
//           for(i=1;i<n;i++)
//           { 
//             val = val + arr[i];
//             if(val>=k)
//                 break;
//           }
//           cout<< i+1;
//           return;
//       }










// }

// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--)
//         {
//             solve();
//             cout<<endl;
//         }
// return 0;
// }




#include<bits/stdc++.h>
using namespace std;

#define vll vector<int>
#define int long long int

#define all(v) v.begin(),v.end()


int dr[4020][4020];

int py[4020];

int convert(int x,int T,int n,int k,vll &a){
    if(T>=k && (py[x]-T>=k)) 
    return 0;
    else if(x>=n) 
     return 1e10;
    else if(dr[x][T]!=-1)
     return dr[x][T];
    int p1 = convert(x+1,min(T+a[x],py[x]-T),n,k,a);

    int p2 = convert(x+1,min(py[x]-T+a[x],T),n,k,a);

    return dr[x][T] = 1+min(p1,p2);

}
int approach(vll &a,int n,int k){
    for(int i=0;i<n/2;i++){
        swap(a[i],a[n-i-1]);
    }
    for(int i=0;i<=n+10;i++){
        py[i]=0;
        for(int j=0;j<=k+10;j++){
            dr[i][j]=-1;
        }
    }
    for(int i=1;i<=n;i++){
        py[i]=py[i-1]+a[i-1];
    }
    int ans = convert(0,0,n,k,a);
    return ans>1e9?-1:ans;
}
void praband(){
    int n,k; cin>>n>>k;
    vector<int> a(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(all(a));
    if(n==1){
        cout<<"-1"<<endl;
        return;
    }

    cout<<approach(a,n,k)<<endl ;

}

signed main(){
    int t; 
    cin>>t ;

    while(t--) {
     praband();
    
    }
}