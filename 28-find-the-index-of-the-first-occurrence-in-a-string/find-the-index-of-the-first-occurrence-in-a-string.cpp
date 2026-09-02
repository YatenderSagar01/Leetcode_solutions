class Solution {
public:
    int strStr(string haystack, string needle) {
        int first = haystack.size();
        int second = needle.size();
        for (int i = 0; i <= first - second; i++) {
            int j = 0;
            while (j < second && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == second) {
                return i;
            }
        }
    return -1;
    }
};