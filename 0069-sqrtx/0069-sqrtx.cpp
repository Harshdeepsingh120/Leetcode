class Solution {
public:
    int mySqrt(int x) {
        int start=1, end=x/2, ans=0;
        if(x<2){
            return x;
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            long long square=1LL*mid*mid;
            if(square==x){
                return mid;
            }else if(square<x){
                ans=mid;
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;
    }
};