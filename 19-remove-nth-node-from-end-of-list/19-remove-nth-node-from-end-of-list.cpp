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
        if(head == NULL){
            return head;
        }
                
        ListNode* pre = NULL;
        ListNode* cur = head;
        int len = 0;
        while(cur){
            len++;
            cur = cur -> next;
        }
        
        cur = head;      
        if(n == len){
            return head -> next;
        }
        int k = len - n;
        
        while(k--){
            pre = cur;
            cur = cur ->next;
        }
        
        pre -> next = cur -> next;
        return head;
    }
};