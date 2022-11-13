[Ransom Note](https://leetcode.com/problems/ransom-note/)  

- Solution: Using MAP
    - Use map to count the freq of each word in magazine, then subtract the freq of the word by 1 each time it present in ransomNote, if the freq became negative, it means magazine lack of the word to compose ransomNote.
    - Time complexity: O(n)
    - Space complexity: O(1)