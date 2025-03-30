class MyStack {
private:
    queue<int> q1;
    queue<int> q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        while(q1.size() != 1) {
            int temp = q1.front();
            q1.pop();
            q2.push(temp);
        }
        int ans = q1.front();
        q1.pop();
        while(!q2.empty()) {
            int temp = q2.front();
            q2.pop();
            q1.push(temp);
        }
        return ans;
    }
    
    int top() {
        while(q1.size() != 1) {
            int temp = q1.front();
            q1.pop();
            q2.push(temp);
        }
        int ans = q1.front();
        q1.pop();
        q2.push(ans);
        while(!q2.empty()) {
            int temp = q2.front();
            q2.pop();
            q1.push(temp);
        }
        return ans;
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */