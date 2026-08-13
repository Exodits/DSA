class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int data;
        for(int i=0;i<nums.size();i++){
            data = nums[i];
            nums[i] = data*data;
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};