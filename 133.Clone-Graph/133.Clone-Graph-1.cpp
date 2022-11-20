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
private:
    unordered_map<Node*, Node*> g_map;
public:
    Node* cloneGraph(Node* node) {
        if (node == nullptr) return nullptr;
        
        if (g_map.find(node) != g_map.end())
            return g_map[node];
        
        g_map[node] = new Node(node->val);
        for (Node* neighbor: node->neighbors) {
            g_map[node]->neighbors.push_back(cloneGraph(neighbor));
        }

        return g_map[node];
    }
};