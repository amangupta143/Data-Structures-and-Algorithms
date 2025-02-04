class Solution {
public:
    vector<int> nextSmallerElement(vector<int> heights, int n) {
        vector<int> next(n);
        stack<int> s;
        s.push(-1);

        for(int i=n-1; i>=0; i--) {
            int curr = heights[i];
            while(s.top() != -1 && heights[s.top()] >= curr) {
                s.pop();
            }
            next[i] = s.top();
            s.push(i);
        }
        return next;
    }

    vector<int> prevSmallerElement(vector<int> heights, int n) {
        vector<int> prev(n);
        stack<int> s;
        s.push(-1);

        for(int i=0; i<n; i++) {
            int curr = heights[i];
            while(s.top() != -1 && heights[s.top()] >= curr) {
                s.pop();
            }
            prev[i] = s.top();
            s.push(i);
        }
        return prev;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int> next(n);
        vector<int> prev(n);
        next = nextSmallerElement(heights, n);
        prev = prevSmallerElement(heights, n);

        int maxArea = 0;
        for(int i=0; i<n; i++) {
            if(next[i] == -1) next[i] = n;
            int currArea = heights[i] * (next[i] - prev[i] - 1);
            maxArea = max(maxArea, currArea);
        }
        return maxArea;
    }
};