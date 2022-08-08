vector<int> Solution::solve(vector<vector<int> > &a) {
    int m = a.size();
    int n = a[0].size();
    vector<int> v ;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            int k = a[i][j]; 
            v.emplace_back(k);
            
        }
    }
    sort(v.begin(), v.end());
    return v;
    
    
}
