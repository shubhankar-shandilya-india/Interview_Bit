int Solution::solve(int a, int b, int c, int d) {
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    sort(v.begin(), v.end());
    if(v[0] == v[1] && v[2] == v[3]){
        return 1;
    }
    else{
        return 0;
    }
}
