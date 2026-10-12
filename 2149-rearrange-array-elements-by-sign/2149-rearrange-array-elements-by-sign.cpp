class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos=0;
        int neg=1;
        int n=nums.size();
        vector<int>newarray(n,0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                newarray[neg]=nums[i];
                neg+=2;

            } else{
                newarray[pos]=nums[i];
                pos+=2;

            }
        }
        return newarray;
        
    }
};