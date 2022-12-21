// PROBLEM 2 ->

// Fighting the darkness:

class Solution{   
public:
    int maxDays(int arr[],int n){
        int max = 0;
        for(int i=0;i<n;i++){
            if (arr[i]>arr[max]){
                max = i;
            }
        }
        return arr[max];
    }
};