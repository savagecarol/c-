/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;

/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define two() cout << "0"
#define ll long lo ng int
#define mp make_pair
#define fi first
#define se second
#define pb push_back

/* loops */
#define inp(i,n,arr) for(int i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(int i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(int i=0;i<n;i++)

/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;



struct Item {
	int value, weight;
	Item(int value, int weight)
	{
	this->value=value;
	this->weight=weight;
	}

};

bool cmp(struct Item a, struct Item b)
{
	double r1 = (double)a.value / (double)a.weight;
	double r2 = (double)b.value / (double)b.weight;
	return r1 > r2;
}

double fractionalKnapsack(int W,  struct Item arr[], int n)
{
	sort(arr, arr + n, cmp);

	int curWeight = 0;
	double finalvalue = 0.0; 

	for (int i = 0; i < n; i++) {
		if (curWeight + arr[i].weight <= W) {
			curWeight += arr[i].weight;
			finalvalue += arr[i].value;
		}

		else {
			int remain = W - curWeight;
			finalvalue += arr[i].value
						* ((double)remain
							/ (double)arr[i].weight);
			break;
		}
 	}
	return finalvalue;
}

int main()
{
    int W  , n;
    cin >> W >> n;

    Item * arr[n];
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        Item * x=new Item(a,b);
        arr[i]=x;
    }

    cout << "Maximum value we can obtain = "
         << fractionalKnapsack(W, *arr, n);
    return 0;
}