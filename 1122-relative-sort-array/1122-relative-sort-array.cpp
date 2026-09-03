class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        int t=0;
        for(int i=0;i<arr2.size();i++){
            int j=t;
            while(j<arr1.size()){
                if(arr1[j]==arr2[i]){
                swap(arr1[t],arr1[j]);
                j++;
                t++;
                }else{
                    j++;
                }

            }
        }
        int n=arr1.size();
        int t2=t;
        int s=1;
        for(int i=t;i<n;i++){
            for(int j=t2;j<n-s;j++){

                if(arr1[j]>arr1[j+1]){
                    swap(arr1[j],arr1[j+1]);
                }
            }
            s+=1;
        }
        // while(t<arr1.size()){
        //     int s=0;
        // for(int i=t;i<arr1.size()-s;i++){
        //     if(arr1[t]>arr1[t+1]){
        //         swap(arr1[t],arr1[t+1]);
        //     }

        // }
        // s+=1;
        return  arr1;
        }
        
    
};