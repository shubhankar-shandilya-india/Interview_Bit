void Solution::arrange(vector<int> &v) {
    int n = v.size();
    int temp, i;
    vector<int> a(n);

    for(i = 0; i < n ; i++){
        a[i] = v[i];
    }
    for(i = 0; i < n ; i++){
        v[i] = a[a[i]];
        
    }
    
}
