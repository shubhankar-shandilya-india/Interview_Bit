ListNode* Solution::swapPairs(ListNode* start) {
    ListNode*p = start;
    ListNode*q, *temp;
    ListNode* new_start = p->next;
    if(start->next == NULL){
        return start;
    }
    while(1){
        q= p->next;
        temp = q->next;
        q->next = p;
        if(temp == NULL || temp->next == NULL){
            p->next = temp;
            break;
        p->next = temp->next;
        p = temp;
        }
    }
    return new_start;
    
}
