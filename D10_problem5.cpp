// PROBLEM 5 ->

// Restaurant ->

vector<int> factors(int n){
    vector<int> temp;
    for(int i = 2; i <= n ; i++){
       if(n % i == 0){
           temp.push_back(i);
       }
    }
    return temp;
}

int restaurant(int l, int b) {
    int ans = 1;
    vector<int> res = factors(l);
    for(int i:res){
        if(b % i == 0){
            ans = i;
        }
    }
     return (l*b)/(ans*ans);
}