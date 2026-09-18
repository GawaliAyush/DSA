class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        int n=nums.size();
        while(j<n){
            if(nums[j]!=0){
            j++;
            }else{
                break;
            }
        }
        for(int i=j+1;i<n;i++){
            if(nums[i]!=0 && j<i){
                swap(nums[i],nums[j]);
                j++;
            }

        }
        
    }
};