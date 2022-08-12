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
    void reorderList(ListNode* head) {
        stack<ListNode*> st;
        
        ListNode* curr = head;
        
        while(curr != NULL){
            st.push(curr);
            curr = curr -> next;
        }
        
        curr = head;
        int n = st.size();
        ListNode* nxt;
        for(int i=0; i<n/2; i++){
            nxt = curr -> next;
            curr -> next = st.top();
            st.pop();
            
            curr = curr -> next;
            curr -> next = nxt;
            curr = curr -> next;
        }
        curr -> next = NULL;
    }
};