
ListNode* Solution::deleteDuplicates(ListNode *head) {
        if (head == NULL) return NULL;
        ListNode* duplicate_head = new ListNode(0);
        duplicate_head->next = head;
        ListNode* previous = duplicate_head;
        ListNode* current = head;
        while (current != NULL) {
            while (current->next != NULL && current->val == current->next->val) {
                current = current->next;
            }
            if (previous->next == current) {
                previous = previous->next;
            } else {
                previous->next = current->next;
            }
            current = current->next;
        }
        return duplicate_head->next;
    }


