int Solution::findMinXor(vector<int> &v) {
    int n = v.size();
    sort(v.begin(), v.end());
    int a, minb = INT_MAX;
    for(int i = 0; i<n; ++i){
        a = v[i] ^ v[i+1];
     minb = min (minb, a);
    }
    return minb;
}

