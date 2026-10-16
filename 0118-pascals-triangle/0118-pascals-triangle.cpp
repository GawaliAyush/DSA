class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        
        int row=numRows;
        vector<vector<int>>ansfinal;
        for(int i=1;i<=row;i++){
            vector<int>temp;
            temp.push_back(1);
            long long ans=1;
            for(int j=1;j<i;j++){
                ans=ans*(i-j);
                ans=ans/j;
                temp.push_back(ans);
                
            }
            ansfinal.push_back(temp);

        }
        return ansfinal;
        
    }
};