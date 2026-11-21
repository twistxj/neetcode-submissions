class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> results;
        if (digits.empty()){
            return {1};
        }
        if(digits.back()<9){
            digits.back()++;
            return digits;
        }
        else{
            digits.pop_back();
            results = plusOne(digits);
            results.push_back(0);
            return results;
        }
    }
};
