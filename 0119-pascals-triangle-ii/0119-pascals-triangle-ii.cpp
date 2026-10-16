class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long ans=1;
        vector<int>row;
        row.push_back(1);
        for(int i=1;i<=rowIndex;i++){
            ans*=rowIndex-i+1;
            ans/=i;
            row.push_back(ans);
        }
        return row;
        
    }
};