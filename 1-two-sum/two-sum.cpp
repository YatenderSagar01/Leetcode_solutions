class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int>index(2,-1);

        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if((nums[i]+nums[j])==target){
                    index[0]=i;
                    index[1]=j;
                    break;
                }
            }
        }
        return index;
    }
};