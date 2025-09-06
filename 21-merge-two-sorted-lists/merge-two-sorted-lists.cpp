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
        ListNode* mergedList = new ListNode(-1);
        ListNode* tail = mergedList;
        while(list1 != nullptr && list2 != nullptr) {
            if(list1->val < list2->val) {
                tail->next = new ListNode(list1->val);
                list1 = list1->next;
            } else {
                tail->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            tail = tail->next;
        }
        while(list1 != nullptr) {
            tail->next = new ListNode(list1->val);
            list1 = list1->next;
            tail = tail->next;
        }
        while(list2 != nullptr) {
            tail->next = new ListNode(list2->val);
            list2 = list2->next;
            tail = tail->next;
        }
        return mergedList->next;
    }
};