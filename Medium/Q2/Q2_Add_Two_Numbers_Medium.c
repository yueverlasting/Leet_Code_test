/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result=new ListNode();
        ListNode* temp=result;
        int carry = 0;
        while(l1!=NULL || l2!=NULL || carry){
            int sum=0;

            /* Get value in L1 */
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }

            /* Get value in L2 */
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }

            /* carry = 先前留下的進位 */
            sum += carry;
            /* 相加後檢查是否需要進位，需要的話保留進位在carry */
            carry=sum/10;

            /* 新建一個 ListNode 去保存運算出來的最後一位 */
            ListNode* newnode=new ListNode(sum%10);

            /* 把存好的 ListNode 放到 temp 中*/
            temp->next=newnode;

            /* 移動 ListNode temp的指標 */
            temp=temp->next;
        }
        return result->next;
    }
};