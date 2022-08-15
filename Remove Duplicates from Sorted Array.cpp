int Solution::removeDuplicates(vector<int> &A) {
    vector<int>v;
    int n =A.size();
    if(A.size() == 1){
        return 1;
    }
    int i = 0;
    for (int j = 0; j < n; j++) {
        if (j < n - 1 && A[j] == A[j+1]) continue;
        else {
            A[i] = A[j];
            i++;
        }
    }
    return i;
}
