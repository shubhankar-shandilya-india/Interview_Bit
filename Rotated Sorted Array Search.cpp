int Solution::search(const vector<int> &v, int b) {
    int n = v.size();
    
    for(int i = 0; i<n; i++){
        if(v[i] == b){
            return i;
        }
    }
    return -1;
    
}
