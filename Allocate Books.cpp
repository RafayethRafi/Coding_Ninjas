
long long cntStudents(vector<int>& arr ,long long pages )
{
    long long students = 1,i;

    long long pagesStudent = 0;

    for(i=0;i<arr.size();i++)
    {
        if(pagesStudent + arr[i] <= pages)
        pagesStudent += arr[i];

        else
        {
            students++;
            pagesStudent = arr[i];
        }
    }

    return students;
}

int findPages(vector<int>& arr, int n, int m) {
    if(m>n) return -1;

    long long l = *max_element(arr.begin(),arr.end());
    long long r = accumulate(arr.begin(),arr.end(),0);

    while(l<=r)
    {
        long long mid = l + (r-l)/2;

        long long students = cntStudents(arr,mid);

        if(students > m) l = mid+1;
        else r = mid-1;

    }
    int ans = (int)l;

    return ans;
}
