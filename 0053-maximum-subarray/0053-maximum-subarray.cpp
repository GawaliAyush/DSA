class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum=0,maximum=LONG_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>maximum){
                maximum=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maximum;
        
    }
};