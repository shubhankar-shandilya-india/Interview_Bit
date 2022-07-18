vector<int> Solution::findOccurences(vector<int> &v) {
    int n = v.size();
    sort(v.begin(), v.end());
    vector<int> x;
    int count = 1;
    for(int i = 0; i<n-1; i++){
        if(v[i] == v[i+1]){
            count++;
        }
        else if (v[i] != v[i+1]){
            x.push_back(count);
            count = 1;
        }
        else {
            x.push_back(count);
        }
       
    }
    x.push_back(count);

    
    return x;
}
