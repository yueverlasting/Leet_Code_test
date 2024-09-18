/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* final;
    struct ListNode* flag;

    /* Both are null */
    if(list1 == NULL && list2 == NULL) return final;
    
    /* One list is null */
    if(list1 == NULL){
        final = list2;
        return final;
    }else if(list2 == NULL){
        final = list1;
        return final;
    }

    /* Set start point */
    if(list1->val < list2->val || list1->val == list2->val){
        final=list1;
        list1 = list1->next;
    }else{
        final=list2;
        list2 = list2->next;
    }

    /* Set flag */
    flag = final;

    while(list1 != NULL && list2 != NULL){
        /* Diff node. */
        if(list1->val < list2->val || list1->val == list2->val){
            flag->next=list1;
            list1 = list1->next;
            flag = flag->next;
        }else{
            flag->next=list2;
            list2 = list2->next;
            flag = flag->next;
        }
    }

    /* if list 1 or 2 already null */
    if(list1 == NULL){
        while(list2 != NULL){
            flag->next = list2;
            list2 = list2->next;
            flag = flag->next;
        }
    }else if(list2 == NULL){
        while(list1 != NULL){
            flag->next = list1;
            list1 = list1->next;
            flag = flag->next;
        }
    }
    return final;
}