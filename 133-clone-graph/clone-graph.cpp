/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneNode(Node* node, unordered_map<Node*, Node*> &visited) {
        if(visited.find(node) != visited.end()) return visited[node];
        Node* newNode = new Node(node->val);
        visited[node] = newNode;

        int size = node->neighbors.size();
        for(int i=0; i<size; i++) {
            newNode->neighbors.push_back(cloneNode(node->neighbors[i], visited));
        }
        return newNode;
    }
    
    Node* cloneGraph(Node* node) {
        if(node == nullptr) return nullptr;
        unordered_map<Node*, Node*> visited;
        return cloneNode(node, visited);
    }
};