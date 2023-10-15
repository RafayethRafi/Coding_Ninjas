vector<int> getSecondOrderElements(int n, vector<int> a) {
    int mx = INT_MIN,mx2 = INT_MIN, mn = INT_MAX,mn2=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(a[i]<mn)
        {
            mn2 = mn;
            mn = a[i]; 
        }
        else if(a[i]<mn2 && a[i] != mn)
        {
            mn2 = a[i];
        }

        if(a[i]>mx)
        {
            mx2 = mx;
            mx = a[i];
        }
        else if(a[i] > mx2 && a[i] !=mx)
        {
            mx2 = a[i];
        }
    }

    return {mx2,mn2};
}
