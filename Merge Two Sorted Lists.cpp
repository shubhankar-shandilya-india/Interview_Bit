ListNode* Solution::mergeTwoLists(ListNode* a, ListNode* b) {
    ListNode* p = a;
    ListNode* q = b;
    ListNode* dummy = new ListNode(0);
    ListNode * dd = dummy;
    while(p != NULL || q != NULL){
        if(p->val < q->val){
            dd->next = new ListNode(p->val);
            p = p->next;
            dd = dd->next;
        }
        else {
            dd->next = new ListNode(q->val);
            q = q->next;
            dd = dd->next;
        }
    }
    return dummy->next;
    
    
}
