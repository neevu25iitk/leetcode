class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> h;
        for (int i = 0; i < nums.size(); i++) {
            h[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (h.find(complement) != h.end() && h[complement] != i) {
                return {i, h[complement]};
            }
        }
      return{};
    }
};