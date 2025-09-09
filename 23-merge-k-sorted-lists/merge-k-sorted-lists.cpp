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
        ListNode* temp = mergedList;
        
        while(true) {
            int smallestElement = INT_MAX;
            int smallestElementIndex = -1;
            for(int i=0; i<size; i++) {
                if(lists[i] != nullptr && lists[i]->val < smallestElement) {
                    smallestElement = lists[i]->val;
                    smallestElementIndex = i;
                }
            }
            if(smallestElementIndex == -1) break;
            temp->next = new ListNode(lists[smallestElementIndex]->val);
            lists[smallestElementIndex] = lists[smallestElementIndex]->next;
            temp = temp->next;
        }
        return mergedList->next;
    }
};