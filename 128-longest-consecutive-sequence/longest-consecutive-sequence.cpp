class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        unordered_set<int> st;
        for (int num : nums) {
            st.insert(num);
        }
        int count = 0;
        int longest = 0;

        for (int num : st) {
            if (st.find(num - 1) == st.end()) {
                count = 1;
                int current = num;
                while (st.find(current + 1) != st.end()) {
                    current++;
                    count++;
                }
                longest = max(longest, count);
            }
        }

        return longest;
    }
};