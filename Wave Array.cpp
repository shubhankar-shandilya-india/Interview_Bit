vector<int> Solution::wave(vector<int> &v) {
    int n = v.size();
    sort(v.begin(), v.end());
    for(int i = 0; i < n-1; i++){
        swap(v[i], v[i+1]);
        i++;
    }
    return v;

}
