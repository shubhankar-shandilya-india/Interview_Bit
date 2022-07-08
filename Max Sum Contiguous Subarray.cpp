int Solution::maxSubArray(const vector<int> &arr) {
    int N = arr.size();
    int curSum = 0;
    int maxSum = INT_MIN;
    int a = *max_element(arr.begin(), arr.end());
    if(a<0){
        return a;
    }
    for(int idx = 0; idx<N ; idx++){
        curSum = curSum + arr[idx];
        if (curSum < 0){
            curSum = 0;
           } 
        maxSum = max(maxSum,curSum);
            
    }
    return maxSum;
    
}
