class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reserves(nums,n-k,n-1);
        reserves(nums,0,n-k-1);
        reserves(nums,0,n-1); 
        
    }
    void reserves(vector<int>&nums, int start,int end){
        while(start<=end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }

};