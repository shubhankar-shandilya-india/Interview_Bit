int Solution::solve(vector<int> &v1, vector<int> &v2, int x) {
    int n1 = v1.size();
    int n2 = v2.size();
    int a = 0, b = 0;
    for(int i = 0 ; i < n1; i++){
        if(v1[i]>x){
            a++;
        }
    }
    
    for(int i = 0 ; i < n2; i++){
        if(v2[i]<x){
            b++;
        }
    }
    return max(a,b);
    
}
