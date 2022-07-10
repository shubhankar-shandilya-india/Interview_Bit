/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* p = A;
    
    if (p == NULL) 
       return A;
    while (p->next != NULL) 
    {
       if (p->val == p->next->val) 
       {             
           p->next = p->next->next;  
       }
       else
       {
          p = p->next; 
       }
    }
    return A;

}
