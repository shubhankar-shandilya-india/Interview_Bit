ListNode* Solution::reverseList(ListNode* A) {
    ListNode *current,*next,*prev;
    current=A;
    prev=NULL;
    while(current!=NULL)
        {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    A=prev;
    return A;
}