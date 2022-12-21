
// PROBLEM 1 ->

// Given a series 9, 33, 73, 129...  Find the n-th term of the series.

  long long int nthOfSeries(long long int n){
      return 8*pow(n,2) + 1;
    }