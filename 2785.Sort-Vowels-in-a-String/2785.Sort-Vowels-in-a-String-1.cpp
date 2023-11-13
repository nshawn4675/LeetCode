class Solution {
public:
    string sortVowels(string s) {
        string tmp = "";

        // for each char in s
        for (int idx=0; idx<s.length(); idx++) {
            // if it's not vowel, do nothing
            if (!isVowel(s[idx])) continue;

            // store vowel to 'tmp'
            tmp += s[idx];
        }

        // sorted with decreasing order
        sort(tmp.rbegin(), tmp.rend());

        // for each char in s
        for(int idx=0; idx<s.length(); idx++) {
            // if it's not vowel, do nothing
            if (!isVowel(s[idx])) continue;

            // replace with the smallest vowel
            s[idx] = *tmp.rbegin();

            // remove the smallest vowel
            tmp.pop_back();
        }

        return s;
    }
private:
    bool isVowel(char c) {
        return (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u') ||
               (c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U');
    }
};