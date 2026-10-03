class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int more=target-a;
            if(mp.find(more)!=mp.end()){
                ans.push_back(i);
                ans.push_back(mp[more]);
                break;
               
            }
            mp[a]=i;
        }
         return ans;
        
    }
};