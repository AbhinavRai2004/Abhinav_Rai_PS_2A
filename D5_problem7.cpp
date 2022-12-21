// PROBLEM 7->

// Reverse the elements of an Array.

void reverseArray(int arr[],int n){
   
   int first = 0;
   int last = n-1;

   while(first<last){
     swap(arr[first],arr[last]);
  }
  
  for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
  }
 
}