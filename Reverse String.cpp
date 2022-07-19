string Solution::reverseString(string s) {
    int n = s.length();
    string st;
    for (int i = n-1; i>=0; i--){
        st.push_back(s[i]);
        
    }
    return st;
}
