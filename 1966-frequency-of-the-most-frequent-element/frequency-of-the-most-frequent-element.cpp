class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long n = nums.size();
        sort(nums.begin(),nums.end());
        // take l and r for slicing window
        long r=0, l=0;
        // take total to store total value and res = maximum freq.
        long total=0,res=0;

        while(r<n){
            // storing r value in total to compare l values
            total+=nums[r];
            // to shift left 
            while((nums[r]*(r-l+1)) > total+k){
                total-=nums[l];
                l++;
            }
            res = max(res,(r-l+1));
            r++;
        }
        return res;

    }
};