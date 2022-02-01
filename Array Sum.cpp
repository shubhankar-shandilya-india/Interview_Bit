vector<int> Solution::addArrays(vector<int> &A, vector<int> &B) {
    vector<int> ans;
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    int carry = 0, i=0, j=0, n1 = A.size(), n2 = B.size();
    while(i < n1 && j < n2) {
        ans.push_back((A[i] + B[j] + carry)%10);
        carry = (A[i] + B[j] + carry)/10;
        i++; j++;
    }
    while(i < n1) {
        ans.push_back((A[i] + carry)%10);
        carry = (A[i] + carry)/10;
        i++;
    }
    while(j < n2) {
        ans.push_back((B[j] + carry)%10);
        carry = (B[j] + carry)/10;
        j++;
    }
    if(carry) {
        ans.push_back(carry);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
