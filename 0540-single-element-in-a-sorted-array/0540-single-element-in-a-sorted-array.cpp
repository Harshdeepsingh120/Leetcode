class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int start=0, end=n-1;
        while(start < end){
            int mid=(start + end) / 2;
            mid=mid - (mid%2);
            if(nums[mid]==nums[mid+1]){
                start=mid+2;
            }else{
                end=mid;
            }
        }
        return nums[start];
    }
};