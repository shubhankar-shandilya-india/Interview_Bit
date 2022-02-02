vector<int> Solution::solve(vector<int> &v) {
    int n = v.size();
    vector<int> a;
    
    int sum = 0, j;

    for(int i = 0; i < n ; i++){
        if(v[i] == 0){
            sum = sum + 1;
        }
        else{
            a.push_back(v[i]);

        }
    }
    
    for(int i = 0; i < sum; i++){
        a.push_back(0);

    }
    return a;
    
    
}
