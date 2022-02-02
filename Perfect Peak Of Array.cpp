int Solution::perfectPeak(vector<int> &v) {
    int i, j;
    int n = v.size();
    for(i = 1; i <= n-2; i++){
        bool l_ans = true;
        bool r_ans = true;
        for(j = i-1; j>=0; j--){
            if(v[j] >= v[i]){
                l_ans =false;
                break;
            }
        }    
        for(j = i+1;j<n;j++){
            if(v[j] <= v[i]){
                r_ans =false;
                break;
            }
        }
        if(l_ans == true &&r_ans == true){
            return 1;
        }
    }
   
    return 0 ;
  
    
    
}
