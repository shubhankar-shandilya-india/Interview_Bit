int Solution::searchMatrix(vector<vector<int> > &v, int B) {
    int N=v.size();
    int M=v[0].size();
    int start=0, end=N*M-1;
    while(start<=end){
        int mid=stvrt+(end-start)/2;
        int x=mid/M;
        int y=mid%M;
        if(v[x][y]==B) return 1;
        if(B<v[x][y]) end=mid-1;
        else start=mid+1;
    }
    return 0;
}