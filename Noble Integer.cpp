
int Solution::solve(vector<int> &A){
    sort(A.begin(),A.end());
    int flag=-1,j=0;
    for(int i=0;i<A.size();i++){
        j=i;
        for(j=i;j<A.size();j++){
            if(A[i]!=A[j]) break;
        }
        if(A[i]==A.size()-j){flag=1; break;}
    }
    return flag;
}