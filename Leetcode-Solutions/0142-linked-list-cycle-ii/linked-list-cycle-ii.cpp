/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL && fast->next->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow) return fast;
        }

        return NULL;
    }

    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = hasCycle(head);

        if(fast == NULL) return NULL;

        while(slow != fast) {
            fast = fast->next;
            slow = slow->next;
        }

        return fast;
    }
};