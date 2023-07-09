vector<int> twoOddNum(vector<int> arr){
    int Xor = 0;
    int set_bit = 0,x=0,y=0;

    for(int i=0;i<arr.size();i++)
    {
        Xor ^= arr[i];
    }

    set_bit = Xor & (~(Xor-1));

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i] & set_bit)
        x ^= arr[i];

        else y ^= arr[i];
    }

    if(x<y) swap(x,y);

    return {x,y};
    

}
