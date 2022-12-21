// PROBLEM 4 -> 

// BEST DIVISOR ->

vector<int> divisorOfNum(int n){
    vector<int> v;
    for(int i = 1; i<=n;i++){
        if(n % i == 0){
            v.push_back(i);
        }
    }
    return v;
}

int bestDivisor(int n){
    vector<int> div = divisorOfNum(n);
    vector<int> res;
    for(int i = 0;i< div.size(); i++){
        int ans = div[i];
        int rans = ans;
        int sum = 0;
        if(ans <= 9){
           res.push_back(ans);
        }
        else{
        while(ans > 0 ){
            int rem = ans % 10;
            sum = sum + rem;
            ans = ans/10;
        }
        res.push_back(sum);
    }
 }
     int max = 0; 
    for(int j = 1;j<res.size() ;j++){
         if(res[j] > res[max]){
            max = j;
         }
    }

    return div[max];
}