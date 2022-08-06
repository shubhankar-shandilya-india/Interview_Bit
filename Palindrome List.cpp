int Solution::lPalin(ListNode* r) {
    ListNode* a = r;
    vector <int> v;
    while(a!=NULL){
        v.emplace_back(a->val);
        a=a->next;
    }
    vector<int> u = v;
    reverse(u.begin(), u.end());
    
    return v == u ? 1 : 0;
    
}
