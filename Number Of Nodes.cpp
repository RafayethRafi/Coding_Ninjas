int numberOfNodes(int N){
    if(N==1) return 1;
    if(N==2) return 2;
    
    int ans = 1,x =2;
    int n = N-1;
    while(n>0){
        if(n%2 == 1) ans *= x;
        
        x =x*x;
        n/=2;
    }

    return ans;
}
