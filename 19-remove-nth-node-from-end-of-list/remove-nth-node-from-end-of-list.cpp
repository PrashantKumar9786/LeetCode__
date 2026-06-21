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
    int length(ListNode* head){
        int len = 0;
        ListNode* p = head;
        while(p != nullptr){
            len++;
            p = p->next;
        }
        return len;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = length(head);
        if(size == 1 && n == 1) return nullptr;
        int len = size - n;
        if(!head->next) return head;
        // if(len == 1)
        // return head->next;
        ListNode* p = head;

        ListNode* q = head->next;
        if(len == 0)
        {
            head = q;
            p->next = nullptr;
            return head;

        }
        int i = 1;
        while(i < len && q->next){
            p = p->next;
            q = q->next;
            i++;
        }
        p->next = q->next;
        return head;
    }
};