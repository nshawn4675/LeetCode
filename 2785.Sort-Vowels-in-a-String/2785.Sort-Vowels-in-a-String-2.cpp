class Solution {
public:
    string sortVowels(string s) {
        unordered_map<char, int> bucket;
        string vowel = "AEIOUaeiou";
        int vowel_idx = 0;

        // for each char in s
        for (char c: s) {
            // if it's not vowel, do nothing
            if (!isVowel(c)) continue;

            // count the vowel
            bucket[c]++;
        }

        // for each char in s
        for (int idx=0; idx<s.size(); idx++) {
            // if it's not vowel, do nothing
            if (!isVowel(s[idx])) continue;

            // find the smallest vowel in bucket.
            while (bucket[vowel[vowel_idx]] == 0) vowel_idx++;

            // replace origin vowel with smallest vowel.
            s[idx] = vowel[vowel_idx];

            // update the count of the vowel
            bucket[vowel[vowel_idx]]--;
        }

        return s;
    }
private:
    bool isVowel(char c) {
        return (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u') ||
               (c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U');
    }
};