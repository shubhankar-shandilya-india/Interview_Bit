int Solution::solve(vector<int> &v, int a) {
    int n = v.size();
    int i, sum = 0;
    for(i = 0; i<n; i++){
        if(v[i] <= a){
            sum = sum +1;
        }
    }
    return sum;
}
