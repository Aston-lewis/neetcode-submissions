class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       
        int n = nums.size(); 
        for(int i=0;i<n;i++){
            int j = i+1; 
            
            while(j<n){
                if(nums[i] == nums[j]){
                    return true; 
                }
                j++;
            }
            
        }
        return false; 
    }
};