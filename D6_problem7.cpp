// PROBLEM 7 -->

// There are some numbers in which some are appearing twice but one is not repeated. Find out the number which appears once.

int findSingle(int ar[], int ar_size)
{
    // Do XOR of all elements and return
    int res = ar[0];
    for (int i = 1; i < ar_size; i++)
        res = res ^ ar[i];
 
    return res;
}