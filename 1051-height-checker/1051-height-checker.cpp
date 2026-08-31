class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector <int> excpected;
        for(auto it: heights){
            
            excpected.push_back(it);
        }
        int n=excpected.size();
        for(int i=1;i<n;i++){
            for(int j=0;j<n-i;j++){
                if(excpected[j]>excpected[j+1]){
                    swap(excpected[j],excpected[j+1]);
                }
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(heights[i]!=excpected[i]){
                cnt+=1;
            }
            
        }
        return cnt;
        
    }
};