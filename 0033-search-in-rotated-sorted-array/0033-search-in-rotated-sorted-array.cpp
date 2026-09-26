class Solution {
public:
    int search(vector<int>& nums, int target) {
        int k = 0;
        int low = 0;
        int high = nums.size() - 1;
        int found = -1;
        int mid = 0;
        while (low <= high) {
            mid = (low + high) / 2;
            if (nums[mid] > nums[nums.size()-1]) {
                k = nums.size() - mid - 1;
                low=mid+1;
            } else {
                high = mid - 1;
            }
        }
        if (target < nums[0]) {
            low = nums.size() - k;
            high = nums.size() - 1;
            while (low <= high) {
                int mid = (low + high) / 2;
                if (nums[mid] == target) {
                    found = mid;
                    return found;
                } else if (nums[mid] > target) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
        } else {
            low = 0;
            high = nums.size() - k - 1;
            while (low <= high) {
                int mid = (low + high) / 2;
                if (nums[mid] == target) {
                    found = mid;
                    return found;
                } else if (nums[mid] > target) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
        }
        return found;
    }
};