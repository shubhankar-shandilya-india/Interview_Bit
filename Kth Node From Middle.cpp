int Solution::solve(ListNode* p, int B) {
    ListNode* a = p;
    ListNode* l = p;
    int n=0, m, x;
    while (l != NULL) {
        n++;
        l = l->next;
    }
    m = ((n/2) + 1) - B ;
    if(m <= 0){
        return -1;
    }
    int i = 1 ;   
    while(a != NULL){
        if(i == m){ 
            return a->val;
        }
        a = a->next;
        i++;
    }
    
}

