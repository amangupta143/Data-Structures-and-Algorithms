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
        if(head == NULL || head->next == NULL) return head;
        ListNode *PrevPtr = NULL;
        ListNode *CurrPtr = head;
        ListNode *NextPtr = CurrPtr->next;

        while(NextPtr != NULL) {
            CurrPtr->next = PrevPtr;
            PrevPtr = CurrPtr;
            CurrPtr = NextPtr;
            NextPtr = NextPtr->next;
        }
        CurrPtr->next = PrevPtr;
        head = CurrPtr;
        return head;
    }
};
