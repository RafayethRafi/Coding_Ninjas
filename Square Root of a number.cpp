int floorSqrt(int n)
{
    long long l = 1, r= n;

    while(l<=r)
    {
        long long mid =l+(r-l)/2;

        if(mid*mid <= n)
        {
            l =mid+1;
        }
        else r = mid-1;
    }

    return r;
}
