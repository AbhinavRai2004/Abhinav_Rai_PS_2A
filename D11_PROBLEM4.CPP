// PROBLEM 4 ->

// Identify Smith Numbers.

int sumOfDigit(long n){
    int sum =0;
    while(n>0){
        int rem = n%10;
        sum = sum + rem;
        n = n/10;
    }
    return sum;
}

int factorialOfANumber(long n){
    int sum = 0;
    for(int i = 2;i<=n; i++){
       while(n > 0){
           if(i >= 9 && n % i == 0){
             sum += sumOfDigit(i);
             n = n/i;
           }
           else{
           if(n % i == 0){
               sum += i;
               n = n / i;
           }
           else{
               break;
           }
        }
       }
   }
    return sum;
}

int solve(long n) {
    int sfact = factorialOfANumber(n);
    int digit = sumOfDigit(n); 
    if(sfact == digit)
      return 1;
      
    return 0;
}