vector<int> superiorElements(vector<int>&a) {
    int n = a.size(), i, mx = INT_MIN;
    vector<int> ans;

    for(i=n-1;i>=0;i--)
    {
        if(a[i]>mx)
        {
            mx =a[i];
            ans.push_back(a[i]);
        }
    }
    sort(ans.begin(),ans.end());

    return ans;
}
