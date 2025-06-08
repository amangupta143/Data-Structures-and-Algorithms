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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int size = lists.size();
        ListNode* mergedList = new ListNode(-1);
        ListNode* head = mergedList;
        while(true) {
            int smallIdx = -1;
            int smallVal = INT_MAX;
            for(int i=0; i<size; i++) {
                if(lists[i] != nullptr && lists[i]->val < smallVal) {
                    smallVal = lists[i]->val;
                    smallIdx = i;
                }
            }
            if(smallIdx == -1) break;
            mergedList->next = new ListNode(smallVal);
            mergedList = mergedList->next;
            lists[smallIdx] = lists[smallIdx]->next;
        }
        return head->next;
    }
};