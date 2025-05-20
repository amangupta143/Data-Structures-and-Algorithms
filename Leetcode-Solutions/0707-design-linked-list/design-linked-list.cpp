class MyLinkedList {
public:
    class Node {
    public:
        int val;
        Node* next;

        Node(int val) {
            this->val = val;
            this->next = NULL;
        }
    };

    Node* head;

    MyLinkedList() {
        head = NULL;
    }
    
    int get(int index) {
        Node* temp = head;
        int tempIdx = 0;
        while (temp != NULL && tempIdx < index) {
            temp = temp->next;
            tempIdx++;
        }
        if (temp != NULL && tempIdx == index) {
            return temp->val;
        } else {
            return -1;
        }
    }
    
    void addAtHead(int val) {
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
    }
    
    void addAtTail(int val) {
        if (head == NULL) {
            addAtHead(val);
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new Node(val);
    }
    
    void addAtIndex(int index, int val) {
        if (index < 0) return;
        if (index == 0) {
            addAtHead(val);
            return;
        }

        Node* temp = head;
        int tempIndex = 0;
        while (temp != NULL && tempIndex < index - 1) {
            temp = temp->next;
            tempIndex++;
        }

        if (temp == NULL) {
            return;
        }

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    
    void deleteAtIndex(int index) {
        if (head == NULL || index < 0) return;

        if (index == 0) {
            head = head->next;
            return;
        }

        Node* temp = head;
        int tempIndex = 0;
        while (temp != NULL && tempIndex < index - 1) {
            temp = temp->next;
            tempIndex++;
        }

        if (temp == NULL || temp->next == NULL) {
            return;
        }

        temp->next = temp->next->next;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index, val);
 * obj->deleteAtIndex(index);
 */