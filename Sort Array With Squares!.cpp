vector<int> Solution::solve(vector<int> &v) {
    vector<int> a;
    int n = v.size();
    for(int i = 0; i<n; i++){
        int x = v[i]*v[i];
        a.push_back(x); 
    }
    sort(a.begin(), a.end());
    return a;
}
