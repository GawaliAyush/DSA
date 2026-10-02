class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int>ans;
        map<int,int>mp;
       
        int loop=nums.size()-k +1;
        int start=0;
        while(loop--){
             int sum=0;
        for(int i=start;i<start+k;i++){
            mp[nums[i]]++;
        }
      vector<pair<int, int>> v(mp.begin(), mp.end());

sort(v.begin(), v.end(), [](auto &a, auto &b) {
    if (a.second == b.second)
        return a.first > b.first;

    return a.second > b.second;
});

for(int i = 0; i < min(x, (int)v.size()); i++){
    sum += v[i].first * v[i].second;
}
ans.push_back(sum);
start+=1;
mp.clear();




        }
        return ans;

        
    }
};