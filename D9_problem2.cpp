// PROBLEM 2 ->

// Minimum Height Triangle(HACKER RANK).

int lowestTriangle(int trianglebase, int area) {
    int h = (2*area)/trianglebase;
    if((2*area) % trianglebase == 0){
        return h;
    }
    else{
        return h+1;
    }
}