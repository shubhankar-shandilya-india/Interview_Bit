int Solution::solve(string s) {
    int n = s.length();
    int a=0,b=0;
    if (s[0]==')' || s[n-1] == '('){
        return 0;
    }
    for (int i = 0; i<n; i++){
        if(s[i] == '('){
            a++;
        }
        else if(s[i] == ')'){
            b++;
        }
        
    }
    if(a==b)return 1;
    else return 0;
}
