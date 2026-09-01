class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int l = 0;
        for(int right=0; right<n;right++){
            if(nums[right]!=0){
                swap(nums[right],nums[l]);
                l++;
            }
        }
    }
};