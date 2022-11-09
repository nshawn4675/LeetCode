class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> cnt;
        for (char c: magazine) cnt[c]++;
        for (char c: ransomNote) {
            if (--cnt[c] < 0) return false;
        }
        return true;
    }
};