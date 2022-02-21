int Solution::isPalindrome(string A) {
    
    transform(A.begin(), A.end(), A.begin(), ::tolower);
    string s="",r;
    for(int i=0;i<A.size();i++){
    
        if(A[i]>='a'&&A[i]<='z') s+=A[i];
        if(A[i]>='0'&&A[i]<='9') s+=A[i];
    }
    r=s;
    
    reverse(s.begin(),s.end());
    
    if(r==s) return 1;
    return 0;
}