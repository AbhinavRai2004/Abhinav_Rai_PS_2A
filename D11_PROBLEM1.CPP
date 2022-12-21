// PROBLEM 2 ->

// Constructing a Number.

string canConstruct(vector<int> a) {
    int sum = 0;
       for(int i = 0;i<a.size() ;i++){
           if(a[i] <= 9){
               sum = sum + a[i];
           }
           else{
           while(a[i] > 0){
            int rem = a[i] % 10;
            sum = sum + rem;
            a[i] = a[i]/10;  
          }
        }
       }
     if(sum % 3==0){
         return "Yes";
     }
     return "No";
}