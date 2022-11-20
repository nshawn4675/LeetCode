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
    Node* cloneGraph(Node* node) {
        if (node == nullptr) return nullptr;

        queue<Node*> q;
        q.push(node);
        unordered_map<Node*, Node*> g_map = {
            {node, new Node(node->val)}
        };

        while (!q.empty()) {
            Node* cur = q.front(); q.pop();
            for (Node* neighbor: cur->neighbors) {
                if (g_map.find(neighbor) == g_map.end()) {
                    q.push(neighbor);
                    g_map[neighbor] = new Node(neighbor->val);
                }
                g_map[cur]->neighbors.push_back(g_map[neighbor]);
            }
        }
        return g_map[node];
    }
};