// PROBLEM 8 -->

//  Factorial Trailing Zeroes(LEETCODE).

 int trailingZeroes(int n) {
         if (n == 0)
        return 0;
 
  int count = 0;
 
    for (int i = 5; i <= n; i *= 5)
        count = count + n / i;
 
    return count;
  }
