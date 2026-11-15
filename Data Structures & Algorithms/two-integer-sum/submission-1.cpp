class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> test;

        for(int a=0;a<nums.size();a++){
            // test.insert({nums[a],a});
            test[nums[a]] = a;
        }
        for(int a = 0; a<nums.size(); a++){
            int ansNum = target-nums[a];
            if(test.find(ansNum)!=test.end() &&
                (test.find(ansNum))->second !=a){
                return {a,test[ansNum]};
            }
        }
        return {};
    }
};
