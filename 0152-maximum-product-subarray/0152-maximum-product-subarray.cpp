class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxprod=INT_MIN;
        for(int i=0; i<n; i++){   //start
            int curprod=1;
            for(int j=i; j<n; j++){  //end
                curprod*=nums[j];
                maxprod=max(maxprod, curprod);
            }
        }
        return maxprod;
    }
};