ListNode* Solution::solve(ListNode* A)
{
    struct ListNode *q=A->next;
    struct ListNode *p=A;
    while(q!=NULL)
    {
        if(q->val==0)
        {
            p->next=q->next;
            q->next=A;
            A=q;
            q=p->next;
        }
        else
        {
            p=q;
            q=q->next;
        }
    }
    return A;
}

