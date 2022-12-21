// PROBLEM 3-->

// To check if the given matrix is Magic Matrix.

void isMagicMatrix(){
    int n;
	cin>>n;
	int mat[n][n];
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){
	        cin>>mat[i][j];
	    }
	}

	int sumOfPrincipleDiagonal = 0;
	int sumOfAnotherDiagonal = 0;
	
	for(int i=0;i<n;i++){
	     
	     sumOfPrincipleDiagonal = sumOfPrincipleDiagonal+mat[i][i];
	     sumOfAnotherDiagonal = sumOfAnotherDiagonal+mat[i][n-1-i];
	}
	if(sumOfPrincipleDiagonal != sumOfAnotherDiagonal){
	    cout<<false;
        return;
	}
	
	for(int i=0;i<n;i++){
	    int rowSum = 0;
	    int colSum = 0;
	    for(int j=0;j<n;j++){
	        rowSum += mat[i][j];
	        colSum += mat[j][i];
	    }
	    if(rowSum != colSum || rowSum != sumOfPrincipleDiagonal){
	        cout<<false;
            return;
	    }
	}
	cout<<true;
}