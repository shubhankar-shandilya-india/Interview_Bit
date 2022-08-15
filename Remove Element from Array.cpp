int Solution::removeElement(vector<int> &A, int B) {
   int i = 0;
    for (int j = 0; j < A.size(); j++) {
        if (A[j] != B) {
            A[i] = A[j];
            i++;
        }
    }
    return i;
}

