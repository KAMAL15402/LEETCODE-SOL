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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next == NULL)
            return NULL;
         ListNode* size = head;
        int s = 1;
        while(size->next != NULL){
         s++;
         size = size->next;
        }
         ListNode* pre= head;
        if(s-n == 0){
            head = head->next;
            return head;
        }
        for(int i=1;i<s-n;i++){
            pre= pre->next;
        }
        cout<< pre->val;
       
        pre->next = pre->next->next;
        return head;
    }
};