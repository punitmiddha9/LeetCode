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
    ListNode* reverseList(ListNode* head) {
//         if(head == NULL || head -> next == NULL){
//             return head;
//         }
        
//         ListNode *newNode = reverseList(head -> next);
        
//         head -> next -> next = head ;
//         head -> next = NULL;
        
//         return newNode;
        
        ListNode* pre = NULL;
        ListNode* cur = head;
        
        while(cur != NULL){
            cur = cur -> next;
            head -> next = pre;
            pre = head;
            head = cur;
        }
        
        return pre;
    }
};