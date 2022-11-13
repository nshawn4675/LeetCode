class Solution {
public:
    string addBinary(string a, string b) {
        string output = "";
        int i = a.size() - 1, j = b.size() - 1;
        short c = 0;
        while (0 <= i || 0 <= j) {
            short s = c;
            if (0 <= i) s += (a[i--] == '1');
            if (0 <= j) s += (b[j--] == '1');
            c = s / 2;
            s %= 2;
            output = to_string(s) + output;
        }
        if (c) output = '1' + output;
        return output;
    }
};