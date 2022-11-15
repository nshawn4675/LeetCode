class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        Trie trie;
        for (string s: strs)
            trie.insert_word(s);

        string res = "";
        TrieNode* cur = trie.get_trie_root();
        while (cur) {
            TrieNode* next = nullptr;
            int next_cnt = 0;
            for (int c='a'; c<='z'; c++) {
                if (cur->next[c] != nullptr) {
                    next_cnt++;
                    if (next == nullptr)
                        next = cur->next[c];
                }
            }

            if (cur != trie.get_trie_root())
                res += cur->val;

            if (cur->is_word || (next_cnt != 1))
                break;

            cur = next;
        }
        return res;
    }
private:
    class TrieNode {
    public:
        vector<TrieNode*> next;
        char val;
        bool is_word;
        TrieNode() {
            next = vector<TrieNode*>(256, nullptr);
            is_word = false;
            val = '\0';
        }
        TrieNode(char c) {
            next = vector<TrieNode*>(256, nullptr);
            is_word = false;
            val = c;
        }
    };
    class Trie {
    private:
        TrieNode* root;
    public:
        Trie() {
            root = new TrieNode();
        }
        TrieNode* get_trie_root() {
            return root;
        }
        void insert_word(string s) {
            TrieNode* cur = root;
            for (char c: s) {
                if (cur->next[c] == nullptr)
                    cur->next[c] = new TrieNode(c);
                cur = cur->next[c];
            }
            cur->is_word = true;
        }
    };
};