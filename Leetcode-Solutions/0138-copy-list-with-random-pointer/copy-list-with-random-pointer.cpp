/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* deep_copy = new Node(-1);
        Node* head_iterator = head;
        Node* copy_iterator = deep_copy;

        while(head_iterator) {
            copy_iterator->next = new Node(-1);
            copy_iterator->next->val = head_iterator->val;

            head_iterator = head_iterator->next;
            copy_iterator = copy_iterator->next;
        }

        head_iterator = head;
        copy_iterator = deep_copy;
        while(head_iterator) {
            Node* temp_head = head;
            Node* temp_copy = deep_copy->next;
            while(head_iterator->random != temp_head) {
                temp_head = temp_head->next;
                temp_copy = temp_copy->next;
            }
            copy_iterator->next->random = temp_copy;
            head_iterator = head_iterator->next;
            copy_iterator = copy_iterator->next;
        }

        return deep_copy->next;
    }
};