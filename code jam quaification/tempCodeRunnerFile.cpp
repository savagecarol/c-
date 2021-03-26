void solve(ll t)
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n; i++)
		{
			cin >> a[i];
		}
	int count = 0 ;
	for(int i = 0 ; i < n-1 ; i++)
	{		
		int minn = i;
		for(int j = i ; j < n ; j++)
			{
				if(a[j] <a[minn])
				{
						minn = j;
				}	
			}

		count = count + (minn - i +1);
		int k = i;	

		while(minn > k)
			{
				int temp = a[k];
				a[k] = a[minn];
				a[minn] = temp;
				minn--;
				k++;
			}
			
	}
	cout << "Case #" << t<<": "<<count ;
}