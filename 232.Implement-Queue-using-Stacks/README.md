[Implement Queue using Stack](https://leetcode.com/problems/implement-queue-using-stacks/)  

- Solution: Using stack
    - Use two stacks, input and output. Just push to input stack when doing push, O(1). Just pop/Peek from output stack when doing pop/peek, O(1). Only when pop/peek from empty output stack, move content from input stack to output stack, O(n). So for long term thinking, it takes O(1) to complete all operations.
    - Time complexity: O(1)
    - Space complexity: O(n)