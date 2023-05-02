#include <bits/stdc++.h> 

long long int findMaxSum(vector<int> &arr, int n) {
	     
	    long long int prev2 = 0;
	    long long int prev = arr[0];
	    long long int cur = prev;
	    
	    for(int i = 1;i<n;i++)
	    {
	        long long int pick = arr[i] + prev2;
	        
	        long long int notPick = prev;
	        
	        cur = max(pick , notPick);
	        prev2 = prev;
	        prev = cur;
	    }

	    return cur;
	}

long long int houseRobber(vector<int>& valueInHouse)
{
    vector<int> a,b;
    int n = valueInHouse.size();

	if(n==1) return valueInHouse[0];
    for(int i=0;i<n;i++)
    {
        if(i!=0) a.push_back(valueInHouse[i]);
        if(i!= (n-1)) b.push_back(valueInHouse[i]);
    }

    long long int ans1 = findMaxSum(a,n-1);
    long long int ans2 = findMaxSum(b,n-1);

    return max(ans1,ans2);
}
