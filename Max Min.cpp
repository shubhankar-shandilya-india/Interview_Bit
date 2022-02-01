int Solution::solve(vector<int> &a) {
    int n = a.size();
    sort(a.begin(), a.end());
    return a[0] + a[n-1];
}
