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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* mergedListHead = new ListNode(-1);
        ListNode* mergedListTail = mergedListHead;

        while(list1 != NULL && list2 != NULL) {
            if(list1->val < list2->val) {
                int value = 1;
                mergedListTail->next = new ListNode(list1->val);
                mergedListTail = mergedListTail->next;
                list1 = list1->next;
            } else {
                mergedListTail->next = new ListNode(list2->val);
                mergedListTail = mergedListTail->next;
                list2 = list2->next;
            }
        }

        if(list1 == NULL) mergedListTail->next = list2;
        else if (list2 == NULL) mergedListTail->next = list1;

        return mergedListHead->next;
    }
};