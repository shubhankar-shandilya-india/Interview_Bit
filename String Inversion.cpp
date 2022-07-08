string Solution::solve(string A) {
    int n=A.length();
    for(int i=0; i<n; i++)
        A[i] = A[i]^32;
    return A;
}
