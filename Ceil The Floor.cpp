
int floor(int arr[],int n,int x)
{
	int l = 0,r = n-1,ans = -1;

	while(l<=r)
	{
		int mid = l + (r-l)/2;

		if(arr[mid] <= x)
		{
			ans = arr[mid];
			l = mid+1;
		}
		else r = mid-1;
	}
	return ans;
}

int ceil(int arr[],int n,int x)
{
	int l = 0, r = n-1,ans = -1;

	while(l<=r)
	{
		int mid = l + (r-l)/2;
		if(x<= arr[mid])
		{
			ans = arr[mid];
			r = mid-1;
		}
		else l = mid+1;
	}

	return ans;
}


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	sort(arr,arr+n);

	pair<int,int> ans;

	ans.first = floor(arr,n,x);
	ans.second = ceil(arr,n,x);

	return ans;
}
