int Solution::searchInsert(vector<int> &v, int x) {
    int n=v.size();
    int low=0, high=n-1;
    int mid=low+(high-low)/2;

    while(low<=high){

        mid=low+(high-low)/2;
        if(v[mid]==x||(mid==0&&x<v[mid])||(mid>0&&x<v[mid]&&x>v[mid-1]))
            return mid;
        if(x>v[mid]) low=mid+1;
        else high=mid-1;
    }
    return n;
}