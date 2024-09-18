/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    int prev_val;

    /* Check head not null and set start value for prev_val */
    if(head!=NULL){
        prev_val = head->val;
    }else{
        return head;
    }

    /* Set start point */
    struct ListNode* final = head;
    struct ListNode* flag = final;
    head = head->next;

    while(head!=NULL){
        if(head->val != prev_val){ //add value to new list and update prev_val
            prev_val = head->val;
            flag->next = head;
            head = head->next;
            flag = flag->next;
        }else{  //Don't add same value to new list
            head = head->next;
        }
    }

    /* End list */
    flag->next = NULL;

    return final;   
}