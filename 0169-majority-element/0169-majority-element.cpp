class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int target=nums[0], count=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(count==0){
                target=nums[i];
            }
            if(nums[i]==target){
                count++;
            }else{
                count--;
            }
        }
        return target;
    }
};