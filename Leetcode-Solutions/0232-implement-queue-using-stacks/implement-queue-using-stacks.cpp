class MyQueue {
private:
    stack<int> st1;
    stack<int> st2;
public:
    MyQueue() {

    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        while(!st1.empty()) {
            int temp = st1.top();
            st1.pop();
            st2.push(temp);
        }
        int ans = st2.top();
        st2.pop();
        while(!st2.empty()) {
            int temp = st2.top();
            st2.pop();
            st1.push(temp);
        }
        return ans;
    }
    
    int peek() {
        while(!st1.empty()) {
            int temp = st1.top();
            st1.pop();
            st2.push(temp);
        }
        int ans = st2.top();
        while(!st2.empty()) {
            int temp = st2.top();
            st2.pop();
            st1.push(temp);
        }
        return ans;
    }
    
    bool empty() {
        return st1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */