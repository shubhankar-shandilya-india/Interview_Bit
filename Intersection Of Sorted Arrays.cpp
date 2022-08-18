vector<int> Solution::intersect(const vector<int> &v1, const vector<int> &v2) {
    int n1 = v1.size();
    int n2 = v2.size();
    vector<int> v;
    multiset<int>st;
    for(int i = 0; i<n2; i++){
        st.insert(v2[i]);
    }
    for(int i = 0; i < n1 ; i++){
       
        int n = st.count(v1[i]);
        
        if(n >= 1){
            v.emplace_back(v1[i]);
            st.erase(st.find(v1[i]));
        }
    }
    return v;
}
