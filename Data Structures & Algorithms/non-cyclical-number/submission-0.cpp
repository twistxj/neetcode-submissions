class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        
        while (n > 0 && n != 1) {
            // If we've seen this sum before, we are stuck in an endless cycle
            if (seen.find(n) != seen.end()) {
                return false;
            }
            seen.insert(n);
            int sumSq = 0;
            while (n > 0) {
                int digit = n % 10;
                sumSq += digit * digit;
                n /= 10;
            }
            // Update n to the new sum for the next iteration
            n = sumSq;
        }
        
        return true;
    }
};
