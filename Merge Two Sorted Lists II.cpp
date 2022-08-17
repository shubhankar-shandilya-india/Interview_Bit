void Solution::merge(vector<int> &A, vector<int> &B) {
    A.insert(A.end(), B.begin(), B.end());
    sort(A.begin(), A.end());
}
