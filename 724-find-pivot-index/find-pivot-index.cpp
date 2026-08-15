class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int leftSum = 0;
       int total = 0;
       for(int i = 0; i < nums.size(); i++){
        total += nums[i];
       }
       for(int i = 0; i < nums.size(); i++){
        int sumRight = total - leftSum - nums[i];
        if(sumRight == leftSum){
            return i;
        }
        leftSum += nums[i];

       }
       return -1;
    }
};