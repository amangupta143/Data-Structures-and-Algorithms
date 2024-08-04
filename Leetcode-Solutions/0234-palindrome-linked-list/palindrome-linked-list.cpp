class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        ListNode *slow = head, *fast = head;
        while(fast!=NULL && fast->next !=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
    
        if(fast != NULL && fast->next == NULL){
            slow = slow->next;
        }

        ListNode *prev = NULL;
        ListNode *temp = NULL;
        while(slow != NULL && slow->next != NULL){
            temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }
        if(slow != NULL){
            slow->next = prev;
        }
        
        fast = head;
        while(slow && fast){
            if(slow->val != fast->val){
                return false;
            }
            slow = slow->next;
            fast = fast->next;
        }
        return true;

    }
};