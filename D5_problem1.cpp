// PROBLEM 1 ->

// Ishaan Loves Chocolates:

class Solution {
  public:
    int chocolates(int n, vector<int> &arr) {
        int min = 0;
        for(int i=0;i<n;i++){
            if(arr[i]<arr[min])
            min = i;
        }
        return arr[min];
    }
};