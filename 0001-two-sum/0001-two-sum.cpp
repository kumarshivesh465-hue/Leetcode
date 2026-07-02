class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> c(2);
        for(int i = 0; i < n;i++){
            for(int j = i+1; j <n ;j++){
                if(nums[i]+nums[j]==target){
                    c[0] = i;
                    c[1] = j;
                    return c;
                }
            }
        }
        return c;
    }
};