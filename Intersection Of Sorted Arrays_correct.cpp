vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    vector <int> ans;
    set_intersection(A.begin(),A.end(),B.begin(),B.end(),back_inserter(ans));
    return ans;
}


vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    int n = A.size() , m = B.size();
    vector<int>inter;
    int i = 0 , j = 0;
    while( i < n && j < m)
    {
        if( A[i] == B[j])
        {
            inter.push_back(A[i]);
            i++,j++;
        }
        else if(A[i] < B[j])
        i++;
        else
        j++;
    }
    return inter;
}

