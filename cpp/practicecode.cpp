class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();

        int largest = nums[n - 1] * nums[n - 2];
        int smallest = nums[0] * nums[1];

        return largest - smallest;
    }
};