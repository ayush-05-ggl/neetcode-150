class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int number : nums) {
            if (seen.count(number) > 0) {
                return true;
            }
            seen.insert(number);
        }
        return false;
    }
};