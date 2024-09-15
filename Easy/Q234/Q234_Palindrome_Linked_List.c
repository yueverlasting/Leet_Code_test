/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

bool isPalindrome(struct ListNode* head) {

    /* Only one in list */
    if (head->next == NULL) return true;

    /* Find middle node */
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    /* Reverse second half list from middle node */
    struct ListNode* reversed = NULL;
    struct ListNode* curr = slow;
    while(curr != NULL){
        /* Set reversed */
        struct ListNode* next = curr->next;
        curr->next = reversed;
        reversed = curr;
        curr = next;
    }

    /* Diff ori and reversed list */
    while(reversed!=NULL && head!=NULL){
        if(head->val != reversed->val) return false;
        head = head->next;
        reversed = reversed->next;
    }

    return true;
}