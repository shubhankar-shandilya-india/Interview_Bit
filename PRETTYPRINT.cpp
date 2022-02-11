vector<vector<int> > Solution::prettyPrint(int A) {
     int n = 2*A-1;
    int lim = n, tmp = 0;
    
    vector<vector<int> > v(n, vector<int> (n));
    
    while(A > 0)
    {
        for(auto i=tmp; i<lim; i++)
        {
            for(auto j=tmp; j<lim; j++)
            {
                v[i][j] = A;
            }
        }
        
        A--;
        lim--;
        tmp++;
    }
    
    return v;

}
