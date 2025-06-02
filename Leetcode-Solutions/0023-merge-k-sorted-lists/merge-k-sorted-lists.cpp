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
        ListNode* ans = new ListNode(-1, nullptr);
        ListNode* currPtr = ans;

        while(true) {
            int lowVal = INT_MAX;
            int lowIdx = -1;
            for(int i=0; i<size; i++) {
                if(lists[i] == nullptr) continue;
                else if(lists[i]->val < lowVal) {
                    lowVal = lists[i]->val;
                    lowIdx = i;
                }
            }
            if(lowIdx == -1) break;
            currPtr->next = new ListNode(lowVal);
            currPtr = currPtr->next;
            lists[lowIdx] = lists[lowIdx]->next;
        }
        return ans->next;
    }
};