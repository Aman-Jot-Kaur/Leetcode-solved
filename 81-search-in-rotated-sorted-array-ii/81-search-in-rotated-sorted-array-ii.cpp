class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while (l <= r && nums[l] != nums[r]) {
            int m = l + (r - l) / 2;
            if (nums[m] == target) {
                return true;
            }
            if (nums[m] > target) {
                if (nums[l] > nums[m] || nums[l] <= target) {
                    r = m - 1;
                } else {
                    l = m + 1;
                }
            } else {
                if (nums[l] <= nums[m] || nums[l] > target) {
                    l = m + 1;
                } else {
                    r = m - 1;
                }
            }
        }
        return find(nums, target, l, r);
    }
private:
    bool find(vector<int>& nums, int target, int l, int r) {
        while (l <= r) {
            if (nums[l++] == target) {
                return true;
            }
        }
        return false;
    }
};