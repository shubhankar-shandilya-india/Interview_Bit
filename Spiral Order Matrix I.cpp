vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
	vector<int> ans;
	int r=A.size(), c=A[0].size();
	int r_beg=0,r_end=r,c_beg=0,c_end=c;
    while(r_beg<r_end && c_beg<c_end){
        for(int i=c_beg;i<c_end;i++)
            ans.push_back(A[r_beg][i]);
        for(int i=r_beg+1;i<r_end;i++)
            ans.push_back(A[i][c_end-1]);
        for(int i=c_end-2;i>=c_beg && (r_end-1-r_beg)>0;i--)
            ans.push_back(A[r_end-1][i]);
        for(int i=r_end-2;i>r_beg && (c_end-1-c_beg)>0;i--)
            ans.push_back(A[i][c_beg]);
        r_beg++;r_end--;
        c_beg++;c_end--;
    }
	return ans;
}