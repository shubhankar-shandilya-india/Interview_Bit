vector<int> Solution::solve(vector<int> &v) {
    int n = v.size();
    int a =0, b=0;
    for (int i = 0; i<n ; i++){
        if(v[i]>0){
            a++;
        }
        else if(v[i]<0){
            b++;
        }
    }
    vector<int> x;
    x.push_back(a);
    x.push_back(b);
    return x;
}   
