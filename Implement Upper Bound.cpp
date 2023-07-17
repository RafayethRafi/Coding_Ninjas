int upperBound(vector<int> &arr, int x, int n){
	int l = 0, r = n-1;
	int ans = n;

	while(l<=r)
	{
		int mid = l + (r-l)/2;

		if(x < arr[mid])
		{
			ans = mid;
			r = mid-1;
		}
		else l = mid+1;
	}
	return ans;
}
