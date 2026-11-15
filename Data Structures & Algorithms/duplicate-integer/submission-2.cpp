class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> test;
        for (int i=0;i<nums.size();i++){
            
            if(!test.insert(nums[i]).second){
                return true;
            }
        }
        return false;
    }
};