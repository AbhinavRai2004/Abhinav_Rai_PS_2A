// PROBLEM 3 ->

// Multiply left and right array sum:

int multiply(int arr[], int n)
{
    int sum1=0,sum2=0;
    for(int i = 0;i<n;i++){
        if(i<n/2){
            sum1 = sum1 + arr[i];
        }
        else{
            sum2 = sum2 + arr[i];
        }
    }
    int mult = sum1 * sum2;
    
    return mult;
}