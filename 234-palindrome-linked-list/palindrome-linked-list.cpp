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
    bool isPalindrome(ListNode* head) {
        stack<int>st;
        ListNode* p = head;
        ListNode* q = head;
        while(p != nullptr){
            st.push(p->val);
            p = p->next;
        }
        while(q != nullptr && !st.empty()){
            if(q->val != st.top())
            return false;

            q = q->next;
            st.pop();
        }
        return true;
    }
};