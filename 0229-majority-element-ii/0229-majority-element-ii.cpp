class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      int cnt1=0;
      int cnt2=0;
      int el1=INT_MIN;
      int el2=INT_MIN;
      for(int i=0;i<nums.size();i++){
        if(cnt1==0 && nums[i]!=el2){
            cnt1++;
            el1=nums[i];
        } else if(cnt2==0 && nums[i]!=el1){
            cnt2++;
            el2=nums[i];
        } else if(nums[i]==el1)  cnt1++;
        else if(nums[i]==el2) cnt2++;
        else{
            cnt1--;
            cnt2--;
        }
      } 
      vector<int>ans;
      int cn1=0;
      int cn2=0;
      int mm=nums.size()/3;

      for(int i=0;i<nums.size();i++){
        if(nums[i]==el1){
            cn1++;
            if(cn1==mm+1){
                ans.push_back(nums[i]);
            }
        } else  if(nums[i]==el2){
            cn2++;
            if(cn2==mm+1){
                ans.push_back(nums[i]);
            }
        }
      }
      return ans;
    }
};