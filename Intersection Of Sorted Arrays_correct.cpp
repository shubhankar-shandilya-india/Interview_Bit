vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    vector <int> ans;
    set_intersection(A.begin(),A.end(),B.begin(),B.end(),back_inserter(ans));
    return ans;
}
