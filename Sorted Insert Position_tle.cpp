// without binary search method

int Solution::searchInsert(vector<int> &v, int b) {
    int n = v.size();
    for(int i = 0; i<n; i++){
        if(v[i] == b){
            return i;
        }
        else if (v[i] < b && v[i+1] > b){
            return i+1;
        }
        else if(v[0] > b){
            return 0;

        }
        else if(b > v[n-1]){
            return n;
        }
    }
    
}

 