class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maxFreq=0;
        int maxNumber=0;
        for(auto it:mp){
            if(it.second >maxFreq){
                maxFreq = it.second;
                maxNumber = it.first;

            }
        }
        return maxNumber;
        
    }
};