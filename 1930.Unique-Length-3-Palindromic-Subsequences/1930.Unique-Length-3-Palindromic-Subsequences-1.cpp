class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<string> palindromes;
        
        for (int l=0; l<s.size(); l++) {
            for (int m=l+1; m<s.size(); m++) {
                for (int r=m+1; r<s.size(); r++) {
                    if (s[l] != s[r]) continue;
                    string palindrome = "";
                    palindrome += s[l];
                    palindrome += s[m];
                    palindrome += s[r];
                    palindromes.insert(palindrome);
                }
            }
        }

        return palindromes.size();
    }
};