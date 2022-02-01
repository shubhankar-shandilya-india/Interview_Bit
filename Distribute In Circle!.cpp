int Solution::solve(int A, int B, int C) {
    int fakePtr=(A+C-1)%B; 
    if(fakePtr==0) return B;
    else return fakePtr;
}
