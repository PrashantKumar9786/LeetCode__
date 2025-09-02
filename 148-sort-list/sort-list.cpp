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
    ListNode* fmiddle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* mergeSort(ListNode* l1, ListNode* l2){
        ListNode* newlist = new ListNode(-1);
        ListNode* p = newlist;

        while(l1 && l2){
             if(l1->val < l2->val){
                p->next = l1;
                p = l1;
                l1 = l1->next;
             }
             else 
             {
                p->next = l2;
                p = l2;
                l2 = l2->next;
             }
        }
        if(l1) p->next = l1;
        else p->next = l2;

        return newlist->next;
    }

    ListNode* sortList(ListNode* head) {
             if(!head || !head->next) return head;

             ListNode* mid = fmiddle(head);
             ListNode* left = head;
             ListNode* right = mid->next;
             mid->next = nullptr;
       
            left = sortList(left);
            right = sortList(right);
            return mergeSort(left, right);

    }
};